void bhv_ice_wall_loop(void) {
    switch (o->oAction) {
        case ICE_WALL_INIT:
            o->oIceWallType = o->oBehParams2ndByte;
            o->oIceWallState = ICE_WALL_UNBROKEN;
            o->oIceWallParentHealth = 2;
            o->parentObj = cur_obj_nearest_object_with_behavior(bhvChiefChilly);
            if (o->parentObj == NULL) {
                obj_mark_for_deletion(o);
            }
            o->oAction = ICE_WALL_INACTIVE;
            break;
        case ICE_WALL_INACTIVE:
            if (o->parentObj->oHealth == o->oBehParams2ndByte) {
                o->oAction = ICE_WALL_ACTIVE;
            } else {
                o->header.gfx.node.flags &= ~GRAPH_RENDER_ACTIVE;
                o->oIntangibleTimer = -1;
            }
            break;
        case ICE_WALL_ACTIVE:
            if (lateral_dist_between_objects(o, o->parentObj) < 300.f && o->oIceWallState != ICE_WALL_BROKEN) {
                o->oAction = ICE_WALL_BREAK;
            }
            if (o->oIceWallState == ICE_WALL_BROKEN) {
                o->header.gfx.node.flags &= ~GRAPH_RENDER_ACTIVE;
                o->oIntangibleTimer = -1;
                if (o->parentObj->oHealth < o->oIceWallParentHealth) {
                    o->oIceWallState = ICE_WALL_UNBROKEN;
                }
            } else {
                o->header.gfx.node.flags |= GRAPH_RENDER_ACTIVE;
                o->oIntangibleTimer = 0;
                load_object_collision_model();
            }
            break;
        case ICE_WALL_BREAK:
                cur_obj_play_sound_2(SOUND_GENERAL_BREAK_BOX);
                o->header.gfx.node.flags &= ~GRAPH_RENDER_ACTIVE;
                o->oIntangibleTimer = -1;
                spawn_triangle_break_particles(20, MODEL_SL_CRACKED_ICE_CHUNK, 3.0f, 0);
                o->oIceWallState = ICE_WALL_BROKEN;
                o->oAction = ICE_WALL_ACTIVE;
    }
    o->oIceWallParentHealth = o->parentObj->oHealth;
}
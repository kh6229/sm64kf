void bhv_ice_wall_loop(void) {
    switch (o->oAction) {
        case ICE_WALL_INIT:
            o->oIceWallType = o->oBehParams2ndByte;
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
            o->header.gfx.node.flags |= GRAPH_RENDER_ACTIVE;
            o->oIntangibleTimer = 0;
            load_object_collision_model();
            break;

    }
}
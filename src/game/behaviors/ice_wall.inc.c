void bhv_ice_wall_loop(void) {
    switch (o->oAction) {
        case ICE_WALL_INIT:
            o->oIceWallType = o->oBehParams2ndByte;
            o->oIceWallState = ICE_WALL_UNBROKEN;
            o->oIceWallTimer = 0;
            o->oHomeY -= 800.0f;
            o->parentObj = cur_obj_nearest_object_with_behavior(bhvChiefChilly);
            if (o->parentObj == NULL) {
                obj_mark_for_deletion(o);
            }
            o->oAction = ICE_WALL_INACTIVE;
            break;
        case ICE_WALL_INACTIVE:
            o->header.gfx.node.flags &= ~GRAPH_RENDER_ACTIVE;
            o->oIntangibleTimer = -1;
            o->oPosY = o->oHomeY;
            if (o->parentObj->oHealth < 2 && o->parentObj->oAction == BULLY_ACT_CHASE_MARIO) {
                o->oAction = ICE_WALL_ACTIVE;
            }
            break;
        case ICE_WALL_ACTIVE:
            if (o->oIceWallState == ICE_WALL_UNBROKEN) {
                o->header.gfx.node.flags |= GRAPH_RENDER_ACTIVE;
                o->oIntangibleTimer = 0;
                if (o->parentObj->oHealth > 0) {
                    o->oAction = ICE_WALL_PHASE_1;
                } else {
                    o->oAction = ICE_WALL_PHASE_2;
                }
            } else {
                if (o->parentObj->oAction == BULLY_ACT_CHASE_MARIO && o->parentObj->oHealth != 2) {
                    o->oIceWallState = ICE_WALL_UNBROKEN;
                }
                o->header.gfx.node.flags &= ~GRAPH_RENDER_ACTIVE;
                o->oIntangibleTimer = -1;
            }
            break;
        case ICE_WALL_BREAK:
                cur_obj_play_sound_2(SOUND_GENERAL_BREAK_BOX);
                o->header.gfx.node.flags &= ~GRAPH_RENDER_ACTIVE;
                o->oIntangibleTimer = -1;
                o->oPosY = o->oHomeY;
                spawn_triangle_break_particles(20, MODEL_SL_CRACKED_ICE_CHUNK, 3.0f, 0);
                o->oIceWallState = ICE_WALL_BROKEN;
                o->oIceWallTimer = 0;
                if (o->parentObj->activeFlags == ACTIVE_FLAG_DEACTIVATED) {
                    obj_mark_for_deletion(o);
                } else {
                    o->oAction = ICE_WALL_ACTIVE;
                }
                break;
        case ICE_WALL_RISE:
            o->header.gfx.node.flags |= GRAPH_RENDER_ACTIVE;
            o->oIntangibleTimer = 0;
            if (o->oTimer < 30) {
                o->oPosY += 23.3f;
            } else {
                o->oIceWallState = ICE_WALL_UNBROKEN;
                o->oAction = ICE_WALL_ACTIVE;
            }
            load_object_collision_model();
            break;
        case ICE_WALL_PHASE_2:
            if (o->parentObj->oChiefChillyHitLava == TRUE) {
                o->oAction = ICE_WALL_BREAK;
            }
            if (o->oIceWallTimer < 60) {
                o->oPosY += 10.0f;
                o->oIceWallTimer++;
            } else if (o->oIceWallTimer >= 60 && o->oIceWallTimer < 120) {
                o->oPosY -= 10.0f;
                o->oIceWallTimer++;
            } else {
                o->oIceWallTimer = 0;
            }
            load_object_collision_model();
            break;
        case ICE_WALL_PHASE_1:
            if (o->parentObj->oChiefChillyHitLava == TRUE) {
                o->oAction = ICE_WALL_BREAK;
            }
            if (o->oIceWallTimer < 60) {
                if (o->oBehParams2ndByte == 0) {
                    o->oPosY += 10.0f;
                }
                    o->oIceWallTimer++;
            } else if (o->oIceWallTimer >= 60 && o->oIceWallTimer < 120) {
                if (o->oBehParams2ndByte == 1) {
                    o->oPosY += 10.0f;
                } else {
                    o->oPosY -= 10.0f;
                }
                o->oIceWallTimer++;
            } else if (o->oIceWallTimer >= 120 && o->oIceWallTimer < 180) {
                if (o->oBehParams2ndByte == 0) {
                    o->oPosY += 10.0f;
                } else {
                    o->oPosY -= 10.0f;
                }
                o->oIceWallTimer++;
            } else {
                o->oIceWallTimer = 60;
            }
            load_object_collision_model();
            break;
            
    }
}
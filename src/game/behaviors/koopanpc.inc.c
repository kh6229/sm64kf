static struct ObjectHitbox sKoopaNPCHitbox = {
    /* interactType:      */ INTERACT_TEXT,
    /* downOffset:        */ 0,
    /* damageOrCoinValue: */ 0,
    /* health:            */ 0,
    /* numLootCoins:      */ 0,
    /* radius:            */ 120,
    /* height:            */ 80,
    /* hurtboxRadius:     */ 80,
    /* hurtboxHeight:     */ 60,
};

void bhv_koopa_npc_loop(void) {
    switch (o->oAction) {
        case 0:
            obj_set_hitbox(o, &sKoopaNPCHitbox);
            o->oInteractionSubtype = INT_SUBTYPE_NPC;
            o->header.gfx.scale[0] = 1.5f;
            o->header.gfx.scale[1] = 1.5f;
            o->header.gfx.scale[2] = 1.5f;
            o->oAction = 1;
            break;
        case 1:
            if (o->oDistanceToMario < 1000.0f) {
                o->oMoveAngleYaw = approach_s16_symmetric(o->oMoveAngleYaw, o->oAngleToMario, 0x140);
            }

            if (o->oInteractStatus == INT_STATUS_INTERACTED) {
                o->oAction = 2;
            }
            break;
        case 2:
            if ((s16) o->oMoveAngleYaw == (s16) o->oAngleToMario) {
                cur_obj_play_sound_2(SOUND_ACTION_READ_SIGN);
                o->oAction = 3;
            } else {
                o->oMoveAngleYaw = approach_s16_symmetric(o->oMoveAngleYaw, o->oAngleToMario, 0x1000);
            }
            break;
        case 3:
            if (set_mario_npc_dialog(MARIO_DIALOG_LOOK_FRONT) == MARIO_DIALOG_STATUS_SPEAK) {
                o->activeFlags |= ACTIVE_FLAG_INITIATED_TIME_STOP;
                u8 secrets = count_objects_with_behavior(bhvHiddenStarTrigger);
                s16 dialog;

                if (secrets >= 5) {
                    dialog = DIALOG_000;
                } else if (secrets > 0 && secrets < 5) {
                    dialog = DIALOG_002;
                } else if (secrets == 0) {
                    dialog = DIALOG_001;
                }

                if (cutscene_object_with_dialog(CUTSCENE_DIALOG, o, dialog)) {
                    set_mario_npc_dialog(MARIO_DIALOG_STOP);
                    o->activeFlags &= ~ACTIVE_FLAG_INITIATED_TIME_STOP;
                    o->oInteractStatus = INT_STATUS_NONE;
                    o->oAction = 1;
                }
            }
            break;
    }
    cur_obj_init_animation_with_sound(KOOPA_ANIM_STOPPED);
}
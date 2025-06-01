static struct ObjectHitbox sBlueMushroomHitbox = {
    /* interactType:      */ INTERACT_BOUNCE_TOP2,
    /* downOffset:        */ 0,
    /* damageOrCoinValue: */ 0,
    /* health:            */ 0,
    /* numLootCoins:      */ 0,
    /* radius:            */ 400,
    /* height:            */ 425,
    /* hurtboxRadius:     */ 0,
    /* hurtboxHeight:     */ 0,
};

void bhv_blue_mushroom_loop(void) {
    switch (o->oAction) {
        case 0:
            obj_set_hitbox(o, &sBlueMushroomHitbox);
            o->oBlueMushBaseScale = o->header.gfx.scale[1];
            o->oAction = 1;
            break;
        case 1:
            if (o->oInteractStatus & INT_STATUS_INTERACTED) {
                o->oAction = 2;
            }
            break;
        case 2:
            if (o->oTimer < 3) {
                o->header.gfx.scale[1] -= 0.15;
            } else if (o->oTimer >= 3 && o->oTimer < 7) {
                o->header.gfx.scale[1] += 0.15;
            } else if (o->oTimer > 7) {
                o->header.gfx.scale[1] = o->oBlueMushBaseScale;
                o->oInteractStatus = INT_STATUS_NONE;
                o->oAction = 1;
            }

    }
}
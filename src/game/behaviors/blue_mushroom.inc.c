static struct ObjectHitbox sBlueMushroomHitbox = {
    /* interactType:      */ INTERACT_BOUNCE_TOP2,
    /* downOffset:        */ 0,
    /* damageOrCoinValue: */ 0,
    /* health:            */ 0,
    /* numLootCoins:      */ 0,
    /* radius:            */ 500,
    /* height:            */ 400,
    /* hurtboxRadius:     */ 500,
    /* hurtboxHeight:     */ 400,
};

void bhv_blue_mushroom_loop(void) {
    switch (o->oAction) {
        case 0:
            obj_set_hitbox(o, &sBlueMushroomHitbox);
            o->oAction = 1;
            break;
        default:
            o->oInteractStatus = INT_STATUS_NONE;
            break;
    }
}
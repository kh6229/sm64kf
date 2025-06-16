void bhv_oreo_loop(void) {
    if (gMarioObject->platform == o) {
        o->oPosY -= 3.0f;
    } else {
        if (o->oPosY < o->oHomeY) {
            o->oPosY += 5.0f;
        } else if (o->oPosY > o->oHomeY) {
            o->oPosY = o->oHomeY;
        }
    }
}
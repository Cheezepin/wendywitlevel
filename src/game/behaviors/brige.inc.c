void bhv_brige_update(void) {
    if(gHudDisplay.stars > 0 && o->oPosY > -125.0f) {
        o->oDrawingDistance = 50000.0f;
        o->oCollisionDistance = 50000.0f;
        o->oPosY -= 50.0f;
    }
}
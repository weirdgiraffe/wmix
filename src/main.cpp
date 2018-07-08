#include "Kaffemaschine.h"
#include "BoshWk.h"
#include "AEGWk.h"

int main(){

    Kaffemaschine *km1 = new Kaffemaschine(new AEGWk(new WasserkocherAEG_15S12D()));
    Kaffemaschine *km2 = new Kaffemaschine(new BoshWk(new WasserkocherBosh_H4215()));

    km1->erzeugeKaffe();
    km2->erzeugeKaffe();
	
	return 0;
}
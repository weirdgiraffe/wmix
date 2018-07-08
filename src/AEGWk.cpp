#include "AEGWk.h"

AEGWk::AEGWk(WasserkocherAEG_15S12D *aegWk){
	this->aegWk = aegWk;
}
void AEGWk::kocheWasser(){
	aegWk->getWasser();
}
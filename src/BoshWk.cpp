#include "BoshWk.h"


BoshWk::BoshWk(WasserkocherBosh_H4215 *boshWk){
	this->boshWk = boshWk;
}

void BoshWk::kocheWasser(){
	boshWk->start();
}
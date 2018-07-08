#include "Kaffemaschine.h"
#include "WasserKocher.h"
#include <iostream>

Kaffemaschine::Kaffemaschine(WasserKocher *wk){
	this->wk = wk;
}
void Kaffemaschine::erzeugeKaffe(){
	std::cout << "koche Wasser" << std::endl;
	wk->kocheWasser();
	std::cout << "bereite Kaffe" << std::endl;
}
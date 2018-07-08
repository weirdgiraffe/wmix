#include "WasserKocher.h"

class Kaffemaschine{
	
private:
	WasserKocher *wk;
	
public:
	Kaffemaschine(WasserKocher *wk);
	void erzeugeKaffe();
};
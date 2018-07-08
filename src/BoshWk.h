#include <WasserkocherBosh_H4215.h>
#include "WasserKocher.h"

class BoshWk : public WasserKocher{
private:
	WasserkocherBosh_H4215 *boshWk;
	
public:
	BoshWk(WasserkocherBosh_H4215 *boshWk);
	void kocheWasser();
	
};

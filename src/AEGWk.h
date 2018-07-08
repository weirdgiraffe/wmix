#include <WasserkocherAEG_15S12D.h>
#include "WasserKocher.h"

class AEGWk : public WasserKocher{
private:
	WasserkocherAEG_15S12D *aegWk;
	
public:
	AEGWk(WasserkocherAEG_15S12D *aegWk);
	void kocheWasser();
};

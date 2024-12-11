#include "../Headers/Swamp.h"

Swamp::Swamp() : Land("Swamp") {}

void Swamp::tap(ManaPool& manaPool) {
	if (!isTapped()) 
	{
		manaPool.addBlack();
		tapped = true;
	}
	else {
		std::cout << "This land is already tapped." << std::endl;
	}
}

void Swamp::untap() {
	tapped = false;
}
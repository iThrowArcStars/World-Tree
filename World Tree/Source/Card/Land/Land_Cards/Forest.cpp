#include <string>

#include "../Headers/Forest.h"


Forest::Forest() : Land("Forest") {}


// The tap methods are stored here for consistency with the other land cards
void Forest::tap(ManaPool& manaPool)
{
	if (!isTapped())
	{
		manaPool.addGreen();
		tapped = true;
	}
	else {
		std::cout << "This land is already tapped." << std::endl;
	}
}

void Forest::untap()
{
	tapped = false;
}


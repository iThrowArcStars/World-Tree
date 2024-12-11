#include "../Headers/Mountain.h"

Mountain::Mountain() : Land("Mountain") {}

// The tap methods are stored here for consistency with the other land cards
void Mountain::tap(ManaPool& manaPool)
{
	if (!isTapped())
	{
		manaPool.addRed();
		tapped = true;
	}
	else {
		std::cout << "This land is already tapped." << std::endl;
	}
}

void Mountain::untap()
{
	tapped = false;
}
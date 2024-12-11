#include "../Headers/Island.h"

Island::Island() : Land("Island") {}

// The tap methods are stored here for consistency with the other land cards
void Island::tap(ManaPool& manaPool)
{
	if (!isTapped())
	{
		manaPool.addBlue();
		tapped = true;
	}
	else {
		std::cout << "This land is already tapped." << std::endl;
	}
}

void Island::untap()
{
	tapped = false;
}
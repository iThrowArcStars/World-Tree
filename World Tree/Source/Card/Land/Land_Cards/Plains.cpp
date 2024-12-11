#include "../Headers/Plains.h"

Plains::Plains() : Land("Plains") {}

void Plains::tap(ManaPool& manaPool) {
	if (!isTapped()) {
		manaPool.addWhite();
		tapped = true;
	}
	else {
		std::cout << "This land is already tapped." << std::endl;
	}
}

void Plains::untap() {
	tapped = false;
}
#include "../Headers/Land.h"

Land::Land(const std::string& type) : type(type), tapped(false), basic(false) {}

void Land::untap() {
	tapped = false;
}

void Land::tap(ManaPool& manaPool) {
	if (!isTapped()) {
		addManaToPool(manaPool);
		tapped = true;
	}
}

const std::string& Land::getType() const {
	return type;
}

bool Land::isTapped() const {
	return tapped;
}

void Land::addManaToPool(ManaPool& manaPool) {
	// Do nothing by default
}
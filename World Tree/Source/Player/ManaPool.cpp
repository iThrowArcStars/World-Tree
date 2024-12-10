#include "../Headers/ManaPool.h"
#include "../Headers/Mana.h"

// Constructor:
ManaPool::ManaPool() {
	manaPool["Red"] = 0;
	manaPool["Green"] = 0;
	manaPool["Blue"] = 0;
	manaPool["White"] = 0;
	manaPool["Black"] = 0;
}

void ManaPool::addMana(const std::string& type) {
	if (manaPool.find(type) != manaPool.end()) {
		manaPool[type]++;
	}
}

int ManaPool::getMana(const std::string& type) const {
	if (manaPool.find(type) != manaPool.end()) {
		return manaPool.at(type);
	}
	return 0;
}
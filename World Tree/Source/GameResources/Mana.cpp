#include "../Headers/Mana.h"
#include "../Headers/ManaPool.h"

// Constructor:
Mana::Mana() : type("Default") {
}

void Mana::addMana(ManaPool& manaPool, const std::string& type) {
	manaPool.addMana(type);
}
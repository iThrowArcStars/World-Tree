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

// This function is used to add mana of any color to the mana pool
void ManaPool::addMana(const std::string& type, int amount) {
	if (manaPool.find(type) != manaPool.end()) {
		manaPool[type] += amount;
	}
}

// These functions are used to add mana of a specific color to the mana pool
void ManaPool::addColorless(int amount) {
	manaPool["Colorless"] += amount;
}

void ManaPool::addBlack(int amount) {
	manaPool["Black"] += amount;
}

void ManaPool::addBlue(int amount) {
	manaPool["Blue"] += amount;
}

void ManaPool::addRed(int amount) {
	manaPool["Red"] += amount;
}

void ManaPool::addWhite(int amount) {
	manaPool["White"] += amount;
}

void ManaPool::addGreen(int amount) {
	manaPool["Green"] += amount;
}

// Getters
int ManaPool::getMana(const std::string& type) const {
	if (manaPool.find(type) != manaPool.end()) {
		return manaPool.at(type);
	}
	return 0;
}

int ManaPool::getTotalMana() const {
	int totalMana = 0;
	// This is a range-based for loop that iterates over each key-value pair in the manaPool map.
	for (const auto& pair : manaPool) {
		totalMana += pair.second;
	}
	return totalMana;
}

// Overloaded operators for printing the mana pool
std::ostream& operator<<(std::ostream& os, const ManaPool& manaPool) {
	for (const auto& pair : manaPool.manaPool) {
		os << pair.first << ": " << pair.second << " ";
	}
	return os;
}
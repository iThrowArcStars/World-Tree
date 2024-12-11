#pragma once

#include <unordered_map>
#include <string>
#include <iostream>

class ManaPool {
public:
    ManaPool();

	// This function is used to add mana of a any color to the mana pool
    void addMana(const std::string& type, int amount = 1);
	
	// These functions are used to add mana of a specific color to the mana pool
    void addColorless(int amount = 1);
    void addBlack(int amount = 1);
	void addBlue(int amount = 1);
    void addRed(int amount = 1);
	void addWhite(int amount = 1);
    void addGreen(int amount = 1);

    // Getters
    int getMana(const std::string& type) const;
    int getTotalMana() const;

	// Overloaded operators for printing the mana pool
    friend std::ostream& operator<<(std::ostream& os, const ManaPool& manaPool);

private:

	// This map is used to store the amount of mana of each type in the mana pool
    std::unordered_map<std::string, int> manaPool;
};
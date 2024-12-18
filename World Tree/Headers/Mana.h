#pragma once

#include <iostream>
#include <string>

class ManaPool;

class Mana {
public:
	Mana();
	void addMana(ManaPool& manaPool, const std::string& type);
private:
	std::string type;
};
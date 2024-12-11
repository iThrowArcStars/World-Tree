#pragma once

#include <iostream>
#include <string>
#include <sstream>

#include "../Headers/ManaPool.h"
#include "../Headers/Mana.h"
#include "../Headers/Battlefield.h"

class Player {
public:
	Player(const Battlefield& battlefield, const ManaPool& manaPool);
	ManaPool& getManaPool();
	Battlefield& getBattlefield();
	static int playerCount;
private:
	std::string name;
	ManaPool manaPool;
	Mana mana;
	Battlefield battlefield;
};
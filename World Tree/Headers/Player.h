#pragma once

#include <iostream>
#include <string>

#include "../Headers/ManaPool.h"
#include "../Headers/Mana.h"

class Player {
public:
	Player();
	ManaPool manaPool;
private:
	std::string name;
};
#include <iostream>

#include "../Headers/Player.h"
#include "../Headers/Battlefield.h"
#include "../Headers/ManaPool.h"
#include "../Headers/Land.h"
#include "../Headers/Mana.h"
#include "../Headers/Forest.h"

int main() {
	Battlefield battlefield;
	ManaPool manaPool;
	Player player(battlefield, manaPool);

	player.getBattlefield().addLand(std::make_shared<Forest>());
    return 0;
}

#include "../Headers/Player.h"

// Constructor:
Player::Player() : name("Default Player"), manaPool() {
}

// Get the player's ManaPool:
ManaPool& Player::getManaPool() {
	return manaPool;
}
#include "../Headers/Player.h"

// Initialize the player count:
int Player::playerCount = 0;

// Constructor:
Player::Player(const Battlefield& battlefield, const ManaPool& manaPool) : manaPool(manaPool), battlefield(battlefield) {
	// Increment the player count:
	playerCount++;

	//Set the player's name:
	std::stringstream ss;
	ss << "Player " << playerCount;
	this->name = ss.str();
}

// Get the player's ManaPool:
ManaPool& Player::getManaPool() {
	return manaPool;
}

// Get the player's Battlefield:
Battlefield& Player::getBattlefield() {
	return battlefield;
}
#pragma once

#include <vector>
#include <memory>
#include "../Headers/Land.h"
#include "../Headers/Card.h"

class Player; // Forward declaration of the Player class

class Battlefield {
public:


	void addLand(std::shared_ptr<Land> land); // Adds a Land object to the battlefield
	void removeLand(std::shared_ptr<Land> land); // Removes a Land object from the battlefield

private:
	std::vector<std::shared_ptr<Card>> permanents; // A vector of shared pointers to Card objects allowing all permanents to be stored in the same container

	friend class Player; // Declare the Player class as a friend to allow access to the permanents vector
};
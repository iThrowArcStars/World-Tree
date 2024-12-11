#include "../Headers/Battlefield.h"

void Battlefield::addLand(std::shared_ptr<Land> land) {
	permanents.push_back(std::static_pointer_cast<Card>(land)); // Cast the Land object to a Card object and add it to the permanents vector
}

// Remove the Land object from the permanents vector
void Battlefield::removeLand(std::shared_ptr<Land> land) {
	permanents.erase(std::remove(permanents.begin(), permanents.end(), std::static_pointer_cast<Card>(land)), permanents.end()); 
}

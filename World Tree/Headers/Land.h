#pragma once
#include <string>

#include "ManaPool.h"
#include "Card.h"

class Land : public Card {
public:
	// Constructor
	Land(const std::string& type); 
	
	// Virtual functions
	virtual void untap(); 
	virtual void tap(ManaPool& manaPool); 
	
	// Getters
	const std::string& getType() const; 
	bool isTapped() const;

protected:
	void addManaToPool(ManaPool& manaPool); // Does nothing by default
	bool tapped; // True if the land is tapped

private:
	std::string type; // The type of land
	bool basic; // True if the land is a basic land
};
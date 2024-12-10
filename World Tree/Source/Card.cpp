#include "../Headers/Card.h"

// Constructor:
Card::Card() {
}

// Getters and Setters:
void Card::setName(const std::string& name) {
	this->name = name; 
}

string Card::getName() {
	return this->name;
}
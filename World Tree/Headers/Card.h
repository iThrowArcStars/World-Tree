#pragma once

#include <string>
#include <iostream>

using namespace std;

class Card {
public:
	Card(); // Constructor

	void setName(const std::string& val);
	string getName();

private:
	string manaCost; // Example Mana Cost : 'R:0, B:0, G:0, B:0, W:0, C:0, A:0'
	string name;
};


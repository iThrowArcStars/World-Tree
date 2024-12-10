#pragma once 

#include <iostream>
#include <string>
#include <unordered_map>

class ManaPool {
public:
	ManaPool();
	void addMana(const std::string& type);
private:
	std::unordered_map<std::string, int> manaPool;
};
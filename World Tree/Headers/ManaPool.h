#pragma once 

#include <iostream>
#include <string>
#include <unordered_map>

class ManaPool {
public:
	ManaPool();
	void addMana(const std::string& type);
	int getMana(const std::string& type) const;
	int getTotalMana() const;
	friend std::ostream& operator<<(std::ostream& os, const ManaPool& manaPool);

private:
	std::unordered_map<std::string, int> manaPool;
};
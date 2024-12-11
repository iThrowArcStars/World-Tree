#pragma once 

#include "../Headers/Land.h"
#include "../Headers/ManaPool.h"

class Swamp : public Land {
public:
	Swamp();
	
	// The tap methods are stored here for consistency with the other land cards
	void tap(ManaPool& manaPool) override;
	void untap() override;
};
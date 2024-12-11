#pragma once

#include "../Headers/Land.h"
#include "../Headers/ManaPool.h"

class Mountain : public Land {
public:
	Mountain();
	
	// The tap methods are stored here for consistency with the other land cards
	void tap(ManaPool& manaPool) override;
	void untap() override;
};
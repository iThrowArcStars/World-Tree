#pragma once

#include "../Headers/Land.h"
#include "../Headers/ManaPool.h"

class Island : public Land {
public:
	Island();

	// The tap methods are stored here for consistency with the other land cards
	void tap(ManaPool& manaPool) override;
	void untap() override;
};
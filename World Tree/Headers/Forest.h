#pragma once

#include "../Headers/Land.h"
#include "../Headers/ManaPool.h"

class Forest : public Land {
public:
	Forest();
	
	void tap(ManaPool& manaPool) override;
	void untap() override; 
};
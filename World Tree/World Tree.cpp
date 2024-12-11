#include <iostream>
#include "../Headers/ManaPool.h"
#include "../Headers/Land.h"
#include "../Headers/Mana.h"
#include "../Headers/Forest.h"

int main() {
    ManaPool manaPool;

    // Test adding mana
    manaPool.addMana("Red", 5);
    manaPool.addMana("Green", 3);
    manaPool.addMana("Blue", 2);
    manaPool.addMana("White", 4);
    manaPool.addMana("Black", 1);
    manaPool.addColorless(6);

    // Testing Tapping Lands
	Forest forest;
	forest.tap(manaPool);
	forest.tap(manaPool);
	forest.untap();
	forest.tap(manaPool);


    // Test getting mana
    std::cout << "Red Mana: " << manaPool.getMana("Red") << std::endl;
    std::cout << "Green Mana: " << manaPool.getMana("Green") << std::endl;
    std::cout << "Blue Mana: " << manaPool.getMana("Blue") << std::endl;
    std::cout << "White Mana: " << manaPool.getMana("White") << std::endl;
    std::cout << "Black Mana: " << manaPool.getMana("Black") << std::endl;
    std::cout << "Colorless Mana: " << manaPool.getMana("Colorless") << std::endl;

    // Test total mana
    std::cout << "Total Mana: " << manaPool.getTotalMana() << std::endl;

    // Test overloaded operator<<
    std::cout << "Mana Pool: " << manaPool << std::endl;

    return 0;
}

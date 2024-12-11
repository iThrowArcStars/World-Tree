#include <iostream>
#include "../Headers/Player.h"
#include "../Headers/ManaPool.h"

int main()
{
    // Create a Player object
    Player player;

    // Create a Mana object
    Mana mana;

    // Add mana to the player's ManaPool
    mana.addMana(player.getManaPool(), "Red");
    mana.addMana(player.getManaPool(), "Green");
    mana.addMana(player.getManaPool(), "Blue");

    // Output the mana values using the overloaded << operator
    std::cout << "Mana values after adding mana:" << std::endl;
    std::cout << player.getManaPool() << std::endl;

    std::cout << "Total mana: " << player.getManaPool().getTotalMana() << std::endl;

    return 0;
}

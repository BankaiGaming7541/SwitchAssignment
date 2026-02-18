// Switch Assignment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cassert>

    enum PotionType {HealthPotion,
        SpeedPotion, 
        StrengthPotion, 
        MagicPotion};
    struct Player{
        int health = 30;
        int speed = 10;
        int strength = 15;
        int magic = 30;    
    } ;



Player potionEffect(PotionType potion, Player player) {
    potion = SpeedPotion;
    switch (potion) {
    case 0:
        player.health = 100;
        player.speed = 10;
        player.strength = 15;
        player.magic = 30;
        break;
    case 1:
        player.health = 20;
        player.speed = 50;
        player.strength = 5;
        player.magic = 10;
        break;
    case 2:
        player.health = 60;
        player.speed = 25;
        player.strength = 200;
        player.magic = 30;
        break;
    case 3:
        player.health = 30;
        player.speed = 10;
        player.strength = 10;
        player.magic = 100;
        break;
    };
    return player;
}


int displayStats(Player player) {
    std::cout << "Player Health: " << player.health << "\n";
    std::cout << "Player Speed: " << player.speed << "\n";
    std::cout << "Player Stregth: " << player.strength << "\n";
    std::cout << "Player Magic: " << player.magic << "\n\n";
    return 0;
}

void assertStats(PotionType potion, Player player, Player expected) {
    Player updatedPlayer = potionEffect(potion, player);
    assert(updatedPlayer.health == expected.health);
    assert(updatedPlayer.speed == expected.speed);
    assert(updatedPlayer.strength == expected.strength);
    assert(updatedPlayer.magic == expected.magic);
}

int main()
{


    const Player player;

    displayStats(player);

    assertStats(PotionType potion, Player player, Player expected);

    displayStats(player);
}

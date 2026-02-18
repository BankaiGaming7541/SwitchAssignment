// Switch Assignment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cassert>
#include <string>

    enum PotionType {HealthPotion,
        SpeedPotion, 
        StrengthPotion, 
        MagicPotion};
    struct Player{
        std::string name = "None: ";
        int health = 30;
        int speed = 10;
        int strength = 15;
        int magic = 30;    
    } ;


    //Setting which PotionType will be applied to the player
Player potionEffect(PotionType potion, Player player) {
    switch (potion) {
    case 0:
        player.name = "Health Potion: ";
        player.health = 100;
        player.speed = 10;
        player.strength = 15;
        player.magic = 30;
        break;
    case 1:
        player.name = "Speed Potion: ";
        player.health = 20;
        player.speed = 50;
        player.strength = 5;
        player.magic = 10;
        break;
    case 2:
        player.name = "Strength Potion: ";
        player.health = 60;
        player.speed = 25;
        player.strength = 200;
        player.magic = 30;
        break;
    case 3:
        player.name = "Magic Potion: ";
        player.health = 30;
        player.speed = 10;
        player.strength = 10;
        player.magic = 100;
        break;
    };
    return player;
}


int displayStats(Player player) {
    std::cout << player.name << "\n";
    std::cout << "Player Health: " << player.health << "\n";
    std::cout << "Player Speed: " << player.speed << "\n";
    std::cout << "Player Stregth: " << player.strength << "\n";
    std::cout << "Player Magic: " << player.magic << "\n\n";
    return 0;
}

//Checks to see if the player stats after being affected by the potion is equal to the expected result from the potion stats themself
void assertStats(PotionType potion, Player player, Player expected) {
    Player updatedPlayer = potionEffect(potion, player);
    assert(updatedPlayer.health == expected.health);
    assert(updatedPlayer.speed == expected.speed);
    assert(updatedPlayer.strength == expected.strength);
    assert(updatedPlayer.magic == expected.magic);
    displayStats(player);
    displayStats(updatedPlayer);

}

int main()
{

    const Player player;

    Player updatedPlayer;

    updatedPlayer.health = 100;
    updatedPlayer.speed = 10;
    updatedPlayer.strength = 15;
    updatedPlayer.magic = 30;

    assertStats(HealthPotion, player, updatedPlayer);

    updatedPlayer.health = 20;
    updatedPlayer.speed = 50;
    updatedPlayer.strength = 5;
    updatedPlayer.magic = 10;

    assertStats(SpeedPotion, player, updatedPlayer);

    updatedPlayer.health = 60;
    updatedPlayer.speed = 25;
    updatedPlayer.strength = 200;
    updatedPlayer.magic = 30;

    assertStats(StrengthPotion, player, updatedPlayer);

    updatedPlayer.health = 30;
    updatedPlayer.speed = 10;
    updatedPlayer.strength = 10;
    updatedPlayer.magic = 100;

    assertStats(MagicPotion, player, updatedPlayer);
}

// Switch Assignment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int potionEffect(enum PotionType, Player) {
    Player player();
    int potionChoice = PotionType;
    switch (potionChoice) {
    case 0:
        player.health = 100;
        speed = 10;
        strength = 15;
        magic = 30;
        break;
    case 1:
        health = 20;
        speed = 50;
        strength = 5;
        magic = 10;
        break;
    case 2:
        health = 60;
        speed = 25;
        strength = 200;
        magic = 30;
        break;
    case 3:
        health = 30;
        speed = 10;
        strength = 10;
        magic = 100;
        break;
    };
    return 0;
}


int main()
{
    int health;
    int speed;
    int strength;
    int magic;
    enum PotionType {HealthPotion = 0, SpeedPotion = 1, StrengthPotion = 2, MagicPotion = 3};
    struct Player{
        int health = 30;
        int speed = 10;
        int strength = 15;
        int magic = 30;
    } player;
}

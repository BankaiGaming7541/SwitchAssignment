// Switch Assignment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int potionEffect(int PotionType,enum Player&) {
    Player applyPotion(enum PotionType, Player player);
    enum PotionType = HEALTH, SPEED, STRENGTH, MAGIC;
    switch (PotionType, Player) {
    case 0:
        health = 100;
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
}


int main()
{
    enum PotionType {HealthPotion = 0, SpeedPotion = 1, StrengthPotion = 2, MagicPotion = 3};
    struct Player{
        int health = 30;
        int speed = 10;
        int strength = 15;
        int magic = 30;
    } player;
}

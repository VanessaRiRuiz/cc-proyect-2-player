#include <iostream>
#include "Character.hh"
#include "Player.hh"


Character::Character(std::string nickName, unsigned int level, unsigned int points)
{
    this->nickName = nickName;
    this->level = level;
    this->points = points;
}

void Character::printCharacter()
{
    std::cout << "Nickname: " << nickName <<std::endl;
    std::cout << "Level: " << level <<std::endl;
    std::cout << "Points: " << points <<std::endl;
    //character information
}

Player::Player(std::string nickName, unsigned int level,unsigned int points, unsigned int age,std::string gender, unsigned int number) : Character(nickName, level, points)
{
    this->age = age;
    this->gender = gender;
    this->number = number;
}

void Player::printPlayer()
{
    printCharacter();
    
    std::cout << "Age: " << age << std::endl;
    std::cout << "Gender: " << gender << std::endl;
    std::cout << "Phone number: " << number << std::endl;
    //player information
}

int main()
{
    //print

    std::cout << "Player 1 " <<std::endl;
    Player* p1{new Player("Vneriv", 10, 1800, 19 , "Woman",111021)}; // players information
    p1->printPlayer();
    std::cout <<std::endl;

    std::cout << "Player 2 " <<std::endl;
    Player* p2{new Player("Vanessita", 17, 2221, 21, "Woman",4082998)};
    p2->printPlayer();
    std::cout <<std::endl;

    std::cout << "Player 3 " <<std::endl;
    Player* p3{new Player("Vanesso", 88, 5230, 31, "Men",1088037)};
    p3->printPlayer();
    std::cout <<std::endl;

    std::cout << "Player 4 " <<std::endl;
    Player* p4{new Player("Mayoneso01", 33, 4525, 10, "Men",1477206)};
    p4->printPlayer();
    std::cout <<std::endl;

    std::cin.get();
    return 0;
}
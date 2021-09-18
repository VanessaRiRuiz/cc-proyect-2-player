#pragma once
#include <string>
#include "Character.hh"

class Player : public Character
{
    private:
        unsigned int age{};
        std::string gender{};
        unsigned int number{};
        //Player information
    public:
        Player(std::string nickName, unsigned int level,unsigned int points, unsigned int age,std::string gender,unsigned int number);
        void printPlayer();
};
#pragma once
#include <string>

class Character
{
    private:
        std::string nickName{};
        unsigned int level{};
        unsigned int points{};
        //character information

    public:
        Character(std::string nickName, unsigned int level, unsigned int points);
        void printCharacter();
};

#include <iostream>

#include "./PersonHeaders/action.h"
#include "./PersonHeaders/personality.h"
#include "./PersonHeaders/position.h"
#include "./PersonHeaders/item.h"
#include "./PersonHeaders/emotion.h"



class PhysicalProps{

    std::string skin;
    std::string hair;
    int height; //in cm
    int build; // 0 weak - 5 strong
};

class State{
    public:
        Position position;
        Action act;
        Item posession;
};
class MentalState{
    Emotion base;
    int intensity; //1 very low - 10 very high
};

enum Relation{
    SIBLING, PARENT, CHILD, FRIEND, STRANGER
};

class Character{
    public:
        std::string name;
        int age;
        int gender; //0 male, 1 female 
        Personality character_personality;
        PhysicalProps props;
        State cur_state;
        MentalState men_state;
        Relation relationToC2;
        bool alive;

        Character(std::string pname, int page, int pgender, Personality p, PhysicalProps prp);
        bool changeState(State newState);
        bool changeMental(MentalState newMentalState);
};

//methods
Character::Character(std::string pname, int page, int pgender, Personality p, PhysicalProps prp){
    name = pname;
    age = page;
    gender = pgender;
    character_personality = p;
    props = prp;
    alive = true;
}

bool Character::changeState(State newState){
    if(alive == true){
        cur_state = newState;
        return true;
    }
    return false;
}

bool Character::changeMental(MentalState newMentalState){
    if(alive == true){
        men_state = newMentalState;
        return true;
    }
    return false;
}

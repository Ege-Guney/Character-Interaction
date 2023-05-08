
#include <iostream>;


#include "./PersonHeaders/personality.h";
#include "./PersonHeaders/position.h";
#include "./PersonHeaders/item.h";


class Character{

    std::string name;
    int age;
    int gender; //0 male, 1 female 
    Personality cp;
    PhysicalProps prp;
    State cur_state;
    MentalState men_state;
    Relation relationToC2;
};
class PhysicalProps{

    std::string skin;
    std::string hair;
    int height; //in cm
    int build; // 0 weak - 5 strong
};

class State{
    Position position;
    Action act;
    Item posession;
};

class Action{};

class MentalState{
    Emotion base;
    int intensity; //1 very low - 10 very high
};
class Relation{};


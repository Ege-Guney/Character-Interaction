#ifndef ACTION_H
#define ACTION_H


enum StimulatingAction{
    NOTHING, PUNCH, THROW, STAB
};

enum NonStimulatingAction{
    NO, COOKING, EATING, RESTING, SLEEPING, WATCHING_TV
};
class Action{
    bool event_stimulation;
    StimulatingAction event_action;
    NonStimulatingAction continous_action;
};



#endif
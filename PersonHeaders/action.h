#ifndef ACTION_H
#define ACTION_H

class Action{
    bool event_stimulation;
    StimulatingAction event_action;
    NonStimulatingAction continous_action;
};

enum StimulatingAction{
    NONE, PUNCH, THROW, STAB
};

enum NonStimulatingAction{
    NONE, COOKING, EATING, RESTING, SLEEPING, WATCHING_TV
};

#endif
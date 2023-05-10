#ifndef LOCATION_H
#define LOCATION_H


enum Place{
    KITCHEN, BEDROOM, PRISON
};

class Location{

    Place env_place;
    bool has_exit;
    bool public_place;
    public:
        Location(Place p, bool pexit, bool pub){
            env_place = p;
            has_exit = pexit;
            public_place = pub;
        }
};


#endif
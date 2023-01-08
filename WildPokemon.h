#ifndef WILDPOKEMON_H
#define WILDPOKEMON_H

#include <string>
#include "GameObject.h"
#include "Trainer.h"
#include <iostream>

using namespace std;

enum WildPokemonStates{
    IN_ENVIRONMENT = 0,
    DEAD = 1,
    IN_TRAINER = 2,
};

class WildPokemon: public GameObject{
    protected:
        double attack;
        double health;
        bool variant;
        bool in_combat;
        string name;
        Trainer* current_trainer;

    public:
        WildPokemon();
        WildPokemon(string name, double attack, double health, bool variant, int id, Point2D in_loc);
        void follow(Trainer* const t);
        bool get_variant();
        double get_attack();
        double get_health();
        bool get_in_combat();
        bool Update();
        void ShowStatus();
        bool IsAlive();
        bool ShouldBeVisible();
        //void SetLocation(Point2D loc);
    
};

#endif
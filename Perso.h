#ifndef PERSO_H
#define PERSO_H

#include <string>


class Perso
{
    private:
        int pv;
        int att;
        std::string nom;
    public:
        void takeDamage(int nbDamage);
        bool aLive();
        Perso();
        int getPV();
};


#endif
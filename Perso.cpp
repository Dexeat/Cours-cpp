#include "Perso.h"

using namespace std;

void Perso::takeDamage(int nbDamage){
    pv -= nbDamage;
    

    if (pv<0)
    {
        pv == 0;
    }
    
}

bool Perso::aLive(){
    if (pv == 0)
    {
        return false;
    }
    else
    {
        return true;
    }    
    
}
int Perso::getPV(){
    return pv;

}
Perso::Perso():pv(20),att(10){}
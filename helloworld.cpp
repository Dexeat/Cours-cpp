#include <iostream>
#include <vector>
#include <string>
#include "Perso.cpp"

using namespace std;

void combat(Perso mob1,Perso mob2){
    int turn = 1;
    int choix;
    while (1)
    {
        if (turn == 1)
        {
            cout << "Attaquer 1, defendre 2";
            cin >> choix;
            if (choix == 1)
            {
                mob2.takeDamage(10);
                cout << mob2.getPV() << "\n";
            }
            if (choix == 2)
            {
                mob1.takeDamage(-5);
                cout << mob1.getPV() << "\n";
            }
            turn = 2;
            
        }
        if (mob1.getPV() <= 0 || mob2.getPV() <= 0)
        {
            break;
        }
        if (turn == 2)
        {
            cout << "Attaquer 1, defendre 2";
            cin >> choix;
            if (choix == 1)
            {
                mob1.takeDamage(10);
                cout << mob1.getPV() << "\n";
            }
            if (choix == 2)
            {
                mob2.takeDamage(-5);
                cout << mob2.getPV() << "\n";
            }
            turn = 1;
        }
        if (mob1.getPV() <= 0 || mob2.getPV() <= 0)
        {
            break;
        }
        
    }
    
}




int main()
{
    Perso mob1;
    Perso mob2;
    combat(mob1,mob2);
    //mob1.takeDamage(10);
    //cout << mob1.getPV();
    return 0;
}

#include <iostream>
#include <vector>
#include <string>
#include "Perso.cpp"

using namespace std;

int main()
{
    Perso toto;
    toto.takeDamage(10);
    cout << toto.getPV();
    return 0;
}

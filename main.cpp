/**
* main.cpp
* File contenete la funzione main,
* che esegue il programma.
*
* By R. Felisi 2016
*/

#include "MathFac.h"
using namespace std;

int main()
{
    MathFac myFac("Matematica");
    
    myFac.mostraBenvenuto();
    myFac.calcolaMedia();
    
    return 0;
}
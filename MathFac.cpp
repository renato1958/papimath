/**
* MathFac.cpp
* File di implementazione
* Contiene l'implementazione dei membri funzione definiti nel file MathFac.h
*
* By R. Felisi 2016
*/

#include "MathFac.h"
#include <iomanip>

using namespace std;

MathFac::MathFac(string nome)
{
    setNomeFac(nome);
}

void MathFac::setNomeFac(string nome)
{
    nomeFac = nome;
}

string MathFac::getNomeFac() const
{
    return nomeFac;
}

void MathFac::mostraBenvenuto() const{
    cout << "Benvenuti alla Facoltà di " << getNomeFac() << endl;
    cout << "Ora passerò a calcolare la media dei miei voti." << endl << endl;
}

void MathFac::calcolaMedia() const
{
    int numeroEsami = 0;
    double punteggioTotale = 0;
    double voto;
    
    cout << "Immetti voto (1-30, -1 termina): ";
    voto = 0;
    cin >> voto;
    
    while(voto != -1) {
        punteggioTotale += voto;
        ++numeroEsami;
        
        cout << "Immetti voto (1-30, -1 termina): ";
        voto = 0;
        cin >> voto;        
    }
    
    if(numeroEsami != 0) {
        cout << setprecision(2) << fixed;
        cout << "Il punteggio dei " << numeroEsami << " che ho dato è " << punteggioTotale << endl;
        cout << "La media è " << punteggioTotale / numeroEsami << "!" << endl;
    } else {
        cout << "Non hai immesso alcun esame!" << endl;
    }
}
/**
* MathFac.h
* File di intestazione
* Contiene classi e membri usati nel programma
*
* By R. Felisi 2016
*/
#include <iostream>

class MathFac
{
   public:
   explicit MathFac(std::string);
   void setNomeFac(std::string);
   std::string getNomeFac() const;
   void mostraBenvenuto() const;
   void calcolaMedia() const;
   
   private:
   std::string nomeFac;
} ;
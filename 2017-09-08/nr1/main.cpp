// inkluderar "saker som finns i 
// biblioteket isostream"
//bl.a. utskrift p� sk�rmen
#include <iostream>

// i en namnrymd ing�r
// olika bibliotek.
// Alla ing�ende bibliotek har olika namn
using namespace std;

int main()
{
  
  /* 
    cout = "datorns standardenhet",
    definierat i operativsystemet (sk�rmen)
    << �r utmatningsoperatorn. (matar ut till
    sk�rmen)
   */
  cout << "kod p� tv� rader ";
  cout << "\"men utskrift p� en rad\"" << endl;
  cout << endl;
  cout << "en rad kod," << endl << "utskrift p� tv�";
  cout<< endl;
  return 0; 
}
// inkluderar "saker som finns i 
// biblioteket isostream"
//bl.a. utskrift på skärmen
#include <iostream>

// i en namnrymd ingår
// olika bibliotek.
// Alla ingående bibliotek har olika namn
using namespace std;

int main()
{
  
  /* 
    cout = "datorns standardenhet",
    definierat i operativsystemet (skärmen)
    << är utmatningsoperatorn. (matar ut till
    skärmen)
   */
  cout << "kod på två rader ";
  cout << "\"men utskrift på en rad\"" << endl;
  cout << endl;
  cout << "en rad kod," << endl << "utskrift på två";
  cout<< endl;
  return 0; 
}
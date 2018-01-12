// antalet råttor i en komun är 100st
// antalet fördubblas varje månad.
// hur många månader tar det innan det finns en miljon råttor
#include <iostream>

using namespace std;

int main()
{
const int MAX_ANTAL = 1000000;
int antal = 100;
int tid = 0;
while (antal< MAX_ANTAL)
{
  tid++;
  antal = antal * 2;
}
  cout << "efter " << tid << "månader så är antalet råttor " << antal << endl;
 return 0;
}
  
  
  
 //viktor karlsson uppgift4
#include <iostream>

using namespace std;
int main()
{

  int timmar;
  int minuter;
  int sekunder;
  
  cout << " Mata in timmar, minuter och sekunder. Använd heltal" << endl;// ger instuktioner till användaren
  
  cin >> timmar >> minuter >> sekunder;// användaren skriver in timmar, minuter och sekunder
  
  cout << "Timmar:" << endl;
  cout << timmar << endl;// skriver ut hur många timmar
  cout << "Minuter:" << endl;
  cout << minuter << endl;// skriver ut hur många minuter
  cout << "Sekunder:" << endl;
  cout << sekunder << endl;// skriver ut hur många sekunder
  
 int sek = sekunder % 60; // räknar ut antal sekunder
 int min = minuter % 60 + sekunder / 60;// räknar ut antal minuter
 int tim = timmar + minuter / 60;// räknar ut antal timmar
  cout << " Den inmatade tiden motsvaras av " << tim << "timmar, " << min << " minuter och " << sek << " sekunder " << endl; 
  // programmet skriver ut tiden
 return 0;
}
  
  
  
 //viktor karlsson uppgift4
#include <iostream>

using namespace std;
int main()
{

  int timmar;
  int minuter;
  int sekunder;
  
  cout << " Mata in timmar, minuter och sekunder. Anv�nd heltal" << endl;// ger instuktioner till anv�ndaren
  
  cin >> timmar >> minuter >> sekunder;// anv�ndaren skriver in timmar, minuter och sekunder
  
  cout << "Timmar:" << endl;
  cout << timmar << endl;// skriver ut hur m�nga timmar
  cout << "Minuter:" << endl;
  cout << minuter << endl;// skriver ut hur m�nga minuter
  cout << "Sekunder:" << endl;
  cout << sekunder << endl;// skriver ut hur m�nga sekunder
  
 int sek = sekunder % 60; // r�knar ut antal sekunder
 int min = minuter % 60 + sekunder / 60;// r�knar ut antal minuter
 int tim = timmar + minuter / 60;// r�knar ut antal timmar
  cout << " Den inmatade tiden motsvaras av " << tim << "timmar, " << min << " minuter och " << sek << " sekunder " << endl; 
  // programmet skriver ut tiden
 return 0;
}
  
  
  
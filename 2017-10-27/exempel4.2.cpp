 
#include <iostream>

using namespace std;
int main()
{
 int tid = 800;// 800 sek 
 int min = tid/60;// antalet hela min som rymms i 800 sek
 int sek = tid % 60;//sek som blir �ver
 cout << tid << "s = " << min << "min och " << sek << " s" << endl;
  
 int tal = 2;
 // tal tilldelas v�rdet av sig sj�lv + 1
 // tal kommer att ha v�rdet 3
 int tal2 = ++tal;
 cout << tal2 << endl;
 
 
  return 0;
} 
 //viktor karlsson uppgift1 
#include <iostream>

using namespace std;
int main()
{
 char gemen;
 char versal;
 cout << "Mata in en gemen (liten bokstav)" << endl;// det kommer st� i terminalen och ge infomation om vad anv�ndaren ska g�ra
 
 cin >> gemen;// g�r s� att anv�ndaren kan skriva i ett tecken
 
  versal = gemen - 32;
 
 
 cout << "Motsvarande VERSAL �r " << versal << endl;// st�r i terminalen och ger den r�tta versalen
 
 return 0;
}
  
  
  
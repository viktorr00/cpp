 //viktor karlsson uppgift1 
#include <iostream>

using namespace std;
int main()
{
 char gemen;
 char versal;
 cout << "Mata in en gemen (liten bokstav)" << endl;// det kommer stå i terminalen och ge infomation om vad användaren ska göra
 
 cin >> gemen;// gör så att användaren kan skriva i ett tecken
 
  versal = gemen - 32;
 
 
 cout << "Motsvarande VERSAL är " << versal << endl;// står i terminalen och ger den rätta versalen
 
 return 0;
}
  
  
  
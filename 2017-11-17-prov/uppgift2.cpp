 //viktor karlsson uppgift2
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
 float tal1;
 float tal2;
 float tal3;
 float medel;
 cout << "Mata in tre flyttal" << endl; //ger information till anv�ndaren vad hen ska g�ra
 cin >> tal1 >> tal2 >> tal3;// anv�ndaren matar in 3 tal
 
 cout << "tal1: " << tal1 << endl;
 cout << "tal2: " << tal2 << endl;
 cout << "tal3: " << tal3 << endl;

 medel = (tal1 + tal2 + tal3)/3;// programmet r�knar ut medelv�rdet
 cout << "Medelv�rdet av " << tal1 << ", "<< tal2 << " och " << tal3 << " blir "  << setprecision(2) << medel << endl;
 // programmet skriver ut talen och dess medelv�rde
 return 0;
}
  
  
  
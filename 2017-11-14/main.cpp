 
#include <iostream>
// vi inf�r string-klassen
// boken sid 44ff
#include <string>
using namespace std;
int main()
{
  
  // teckenf�lt, C-str�ngar
  // du best�mmer storleken
  // n�r str�ngen skapas
  // du m�ste deklarera den innan den kan anv�ndas
  
 char namn[100]; // 0-99
 namn[66] = 'A'; // heltalet 65
 cout << namn[66] << endl;
 //char ett_teccken;
 char fnman[] = " Bengt";
 cout << fnman << endl;
 
 char hel[100]; // 0-99
 hel[66] = 65; // heltalet 65
 cout << hel[66] << endl;
 //cout << hel << endl; 
 
 string s;
 s = "sean bannans ";
 string s1 = "banan!!!!";
 s = s+s1;
 cout << s << endl;
 s.at(0) = 'P';
 cout << s << endl;
 int antal = s.size();
 cout << antal << endl;
 int hitta = s.find("nna",0);
 cout << hitta << endl;
 string delstring = s.substr(hitta,4);
 cout << delstring << endl;
  return 0;
}
  
  
  
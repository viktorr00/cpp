
#include <iostream>
using namespace std;
int main()
{
  /*
   * datatyp variabelnamn;
   */
  int tal1, tal2; // plats f�r 
             // en int
             // allokeras (bokas)
  
 // antal = 4; // antal
             // tilldelas
             // v�rdet 4 
 // inmatning fr�n tangentbord
 cout << "mata in ett heltal 1: ";
 cin >> tal1;            
 cout << "mata in heltal 2: ";
cin >> tal2;
int summa = tal1+tal2;
/*
 * int summa;
 * summa = tal1+tal2;
 */
 cout << "summan av talen blir " << summa << endl;
 cout << "summan av talen blir " << (tal1+tal2) <<endl;
 /*
  * tal = tal+1;
  */
return 0;
}

#include <iostream>
using namespace std;
int main()
{ 
  char falt[]= {'g','r','a','n', '\0'};
  cout << falt[0] << falt[1] << falt[2] << falt[3] << endl;
  cout << falt <<endl;
  // rad 10: ett teckenf�lt med 8 platser skapas 
  // 'j', 'u', 'l', 'g', 'r', 'a', 'n','\0' 
  char nyfalt[] = "julgran";
  cout << nyfalt <<endl; // stoppar n�r '\0' hittas
  
  
  /*
  double tid[]={9.98,10.15};
  cout << " f�ltet inneh�ller f�ljande tider: " << endl;
cout << tid[0] << "\t" << tid[1] << endl;
  
   double tmp;
  tmp = tid[0];
  tid[0] = tid[1];
  tid[1] = tmp;
  
  
 
cout << " f�ltet inneh�ller f�ljande tider: " << endl;
cout << tid[0] << "\t" << tid[1] << endl;
  
 */
  
  
  return 0;
} 

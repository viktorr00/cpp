#include <iostream> 
#include <iomanip>
using namespace std;
int main()
{
  cout << "\"en textsträng\"" << endl;
  cout << "another one" << endl;
  cout << "\tanother one" << endl;
  cout << "yet another one\n";
  
  //const float PI = 3.14159;
  //PI = PI + 1;
  /*
  int tal = 3;
  float flyt = tal;
  cout << flyt << endl;
  flyt = 4.89;
  tal = flyt;
  cout << tal << endl;
  */
  
  char tecken = 'B';
  cout << (int)tecken << endl;
  /*
  double f =3.14159;
  cout << setprecision(5) << f << '\n';
  cout << setprecision(9) << f << '\n';
  cout << fixed;
  // om det sker ett fel vid körningen
  //cout << 7/0 << endl;
  // avbryts programmet och 
  // returnerar (skickar) ett 
  // heltal skilt från 0 till os
  cout << setprecision(5) << f << '\n';
  cout << setprecision(9) << f << '\n';
  */
  return 0;
  
}

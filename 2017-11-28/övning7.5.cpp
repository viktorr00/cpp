
#include <iostream>

using namespace std;
int main()
{

  float langd;
  float vind;
  cout << "Ange längden och vindstyrkan(m/s)" << endl;
  cin >> langd >> vind;
  if ( (langd > 7.92) && (vind < 2.0) )
  {
    cout << "Grattis det är rekord" << endl;
    
  }
  
  else 
  {  cout << "det är inte rekord" << endl;
  }
 return 0;
}
  
  
  
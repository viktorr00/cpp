
#include <iostream>

using namespace std;
int main()
{

  double alder;
  cout << "Ange din ålder" << endl;
  cin >> alder;
  if (alder < 15 || alder > 65 )
  {
    cout << "kostnaden för bussbiljeten är 5kr" << endl;
    
  }
  
  else 
  {  cout << "kostnaden för bussbiljeten är 10kr" << endl;
  }
 return 0;
}
  
  
  
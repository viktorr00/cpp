
#include <iostream>

using namespace std;
int main()
{
  char kon;
 
  cout << "vilket kön identifierar du dig som? (m/k)" << endl;
  cin >> kon;
  
  cout << "du är en " << (kon != 'm' ? "kvinna" : "man");
  
 return 0;
}
  
  
  

#include <iostream>
using namespace std;

int main()
{
int tal1, tal2, steg;

cout << "tal1 ";  cin >> tal1;
cout << "tal2 ";  cin >> tal2;
cout << "steg ";  cin >> steg;

for(int n = tal1 ; n > tal2 ; n = n - steg)
{
  cout << n << ' ';
}
  
 return 0;
}
  
  
  
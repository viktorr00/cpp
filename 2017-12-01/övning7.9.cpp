
#include <iostream>

using namespace std;
int main()
{
int tal1;
int tal2;
int max;
cout << "mata in ett tal" << endl;
cin >> tal1;
cout << "mata in ett till tal" << endl;
cin >> tal2;

max = tal1 < tal2 ? tal1 : tal2;
cout << "det minsta talet är " << max << endl;

  
 return 0;
}
  
  
  

#include <iostream>

using namespace std;
int main()
{
double liter;
cout << "Hur mycket bränsle finns det i tanken?" << endl;
cin >> liter; 

if (liter < 10)
{ int s = 50 - liter;
  int kr = s * 9.5;
  cout << "Du behöver tanka " << s << "liter och det kostar " << kr << "kr";
}

else 
 cout << " Du kan köra vidare" << endl;  
  
 return 0;
}
  
  
  
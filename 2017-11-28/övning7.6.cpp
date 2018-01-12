
#include <iostream>

using namespace std;
int main()
{
float pris;
float antal;

cout << "hur många CDR-skivor önskas idag?" << endl;
cin >> antal;
if (antal < 10)
{ pris = antal * 9.90;
 cout << "priset blir " << pris << "kr" << endl;
}

else if ((antal > 10) && (antal < 50))
{
 pris = antal * 9.90 * 0.95;
 cout << "priset blir " << pris << "kr" << endl;
}  
  
else if ((antal > 50) && (antal < 100))
{
 pris = antal * 9.90 * 0.90;
 cout << "priset blir " << pris << "kr" << endl;
}    
  
else if (antal > 100)
{
 pris = antal * 9.90 * 0.85;
 cout << "priset blir " << pris << "kr" << endl;
}    
  
  
 return 0;
}
  
  
  
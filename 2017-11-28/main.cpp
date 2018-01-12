
#include <iostream>

using namespace std;
// switch-case, sid 90
int main()
{
 int tal = 4; 
 switch (tal) // heltal, (char, int)
 {
   case 1:
   cout << "tal är 1" << endl;
   break;
   case 2:
   cout << "tal är 2" << endl;
   break;
   case 3:
   cout << "tal är 3" << endl;
   break;
   default:
   cout << "tal är något annat" << endl;  
 }   
 
 
 /* 
if (tal==1) // något som går att utverdera sant/falskt
{
  cout << "tal är 1" << endl;
}
else if (tal==2) 
{
  cout << "tal är 2" << endl;
}
else if (tal==3) 
{
  cout << "tal är 3" << endl;
}
else 
{
  cout << "tal är något annat" << endl;
}
  
 */ 
  
  
 return 0;
}
  
  
  

#include <iostream>

using namespace std;
int main()
{
 /*if ( (2<=1) && (1<=1) )// Måste entidigt
 // kunna utverderas true / false
 {
   cout << "sats 1 (sant)" << endl;
   cout << "sats 2 (sant)" << endl;
}
 
  else 
  {
    cout << "sats 1 (falskt)" << endl;
   cout << "sats 2 (falskt)" << endl;
    
  }*/
 // alternativ 1
  if (1==2)
   cout << "1" << endl;
 
 else if (2==3)
  cout << "2" << endl;
 
 else 
   cout << "3" << endl;

 
 // alternativ 2
 // nästlade if-satsen
 if (1==2)
   cout << "1" << endl;
 
 else 
 {
   if (2==3)
     cout << "2" << endl;
   else 
     cout << "3" << endl;
   
}
 
 
 return 0;
}
  
  
  
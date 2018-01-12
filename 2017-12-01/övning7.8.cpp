
#include <iostream>
#include <string>
using namespace std;
int main()
{

  cout << "Mata in ett namn" << endl;
 string namn1;
getline(cin, namn1);

  cout << "Mata in ett till namn" << endl;
 string namn2;
getline(cin, namn2);
   
 cout << "i bokstavsårdningen" << endl;
 if (namn1 < namn2)
 { cout << namn1 << endl;
 cout << namn2 << endl;
 }
 
 else 
   { cout << namn2 << endl;
 cout << namn1 << endl;
 }
  
 return 0;
}
  
  
  
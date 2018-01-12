
#include <iostream>
using namespace std;
int main()
{
 
  
cout << "skriv en bokstav" << endl;

char bokstav1, bokstav2, bokstav3; 
cin >> bokstav1;
bokstav2 = bokstav1+1;
bokstav3 = (bokstav2 + 1);
cout << bokstav1 << bokstav2 << bokstav3 << endl;
cout << (int)bokstav1 << endl;

int tal = 97;
cout << tal << endl;
cout << (char)tal << endl;
 
  
return 0;
}

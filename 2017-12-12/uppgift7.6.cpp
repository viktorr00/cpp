
#include <iostream>
using namespace std;

int main()
{
  int tal;
  int mitt = 3;
  int raknare = 1;
cout << "Gissa mitt hemliga tal (1, 2 eller 3)" << endl;
 cin >> tal; 

 while (tal !=mitt)
 {
   cout << "du gissade fel, försök igen, försök nr: " << raknare << endl;
   raknare ++; 
   cin >> tal;
}
cout << " grattis det var rätt på nr: " << raknare << endl;

 return 0;
}
  
  
  
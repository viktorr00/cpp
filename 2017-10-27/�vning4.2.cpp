#include <iostream>

using namespace std;
int main()
{
 int tal;
 cout << "mata in ett antal m�nader" << endl;
 cin >> tal;
 int ar = tal / 12;
 int manader = tal % 12;
 cout << tal << " m�nader = " << ar << "�r och " << manader << " m�nader" << endl;
  

  return 0;
} 
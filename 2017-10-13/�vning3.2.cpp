#include <iostream>
using namespace std;
int main()
{ 
  int tal[3];
  cout << "mata in tre heltal" << endl;
  cin >> tal[0] >> tal[1] >> tal[2];

   int temp = tal[0];
   tal[0] = tal[2];
   tal[2] = temp;
   cout << "innehåll i fältet " << tal[0] <<' ' << tal[1] << ' ' << tal[2] <<endl;
  
  

 
  
  return 0;
} 

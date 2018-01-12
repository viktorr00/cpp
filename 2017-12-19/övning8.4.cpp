
#include <iostream>
using namespace std;

int main()
{

  setlocale( LC_ALL, "" );
  
  int hastighet[8];
  int speed[8];
  for ( int n = 0 ; n < 8 ; n++)
  {
    hastighet[n] = 5 * (n + 1);
    speed[n] = 18 * (n + 1);
    cout << hastighet[n] << "  " << speed[n] << endl;
    
  }
  
 return 0;
}
  
  
  
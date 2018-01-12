
#include <iostream>

using namespace std;
int main()
{
int avstand;
cout << " ditt avstånd till arbetet (km)" << endl;
 cin >> avstand;
 
 if (avstand <= 50)
 {
   cout << "walla du får inga pengar faktist" << endl;
} 
  else 
  {
    char civiltilstand;
    cout << "gäri eller inte (g/i)? ";
    cin >> civiltilstand;
    int ar;
    cout << "hur länge kommer din dubbla bosättning vara?" << endl;
    cin >> ar;
    
    if ( ( (civiltilstand=='g') && (ar<=3) )  ) 
    {
      cout << "du har rätt till skattebidrag" << endl; 
    }
  }
    
    
 return 0;
}
  
  
  
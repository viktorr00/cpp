
#include <iostream>

using namespace std;
int main()
{
int tal;
int behallning = 1000;
  cout << "Meny" << endl;
  cout << "1. insättning" << endl;
  cout << "2. uttag" << endl;
  cout << "3. visa behållning" << endl;
  cin >> tal;
  switch (tal)
  {
    case 1:
      cout << "hur mycket para vill du sätta in?";
     int insattning;
     int pengar;
     cin >> insattning;
     pengar = insattning + 1000;
     cout << " det nya beloppet är " << pengar << endl;
     break;
     
     case 2:
      cout << "hur mycket para vill du ta ut?";
     int uttag;
     int para;
     cin >> uttag;
     if (uttag < 1000)
     { para = 1000 - uttag;
     cout << " det nya beloppet är " << para << endl;}
     else 
     {
       cout << "du kan inte ta ut mer pengar än vad du har" << endl;
    }
     break; 
    
     case 3:
       cout << "din behållning är " << behallning << endl;
       break;
    
    
    
    
    
    
    
    
  }
  
  
 return 0;
}
  
  
  
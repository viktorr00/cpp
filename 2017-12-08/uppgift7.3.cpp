
#include <iostream>

using namespace std;
int main()
{
  float tal;
  cout << "mata in ett tal" << endl;
  cin >> tal;
  
  if (tal > 0)
  {
    cout << "det är ett possetivt tal" << endl;
  }
  
  else 
  {
    if (tal == 0)
    {
      cout << "talet är 0" << endl;
    }

    else 
    {
      cout << " talet är negativt" << endl;
    }
  }
 return 0;
}
  
  
  
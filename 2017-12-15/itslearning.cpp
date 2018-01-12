
#include <iostream>
using namespace std;

int main()
{
  /*
   * while-sats
int falt[10]={-4,88,0,77,-9,-33,65,8,-3,6};  
int i=0;


while ( i<10 )
{
  cout << falt[i] << " ";
  i++;
}
i=0;
cout << endl;
while ( i<10 )
{
  if (falt[i]>0)
  falt[i] = falt[i]*(-1);
  i++;
}
 i=0;
while ( i<10 )
{
 cout << falt[i] << " ";
  i++;
}
*///for-sats
  int falt[]={-4,88,0,77,-9,-33,65,8,-3,6};  
  
  for (int i=0; i<10; i++)
  {
    
  cout << falt[i] << " ";  
        
  }
  cout << endl;
  
  
  for (int i=0; i<10; i++)
  {
    
  if (falt[i]>0)  
     falt[i]=falt[i]*(-1);
  }
  
  for (int i=0; i<10; i++)
  {
    
  cout << falt[i] << " ";  
  }     
 return 0;
}
  
  
  
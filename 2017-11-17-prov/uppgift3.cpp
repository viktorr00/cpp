 //viktor karlsson uppgift3
#include <iostream>
#include <string>
using namespace std;
int main()
{
string text;
  
  cout << "Mata in din text" << endl; //s�ger vad anv�ndaren ska skriva in
  
  getline(cin, text); // anv�ndaren matar in text
  
  cout << "Mata in tecken att leta efter: " << endl;
  
 string tecken;
  
  getline(cin, tecken);// anv�ndaren matar in tecken att leta efter
 
  int pos = text.find(tecken, 0);// programmet hittar tecknen
  
  string ut = text.substr(pos, 4);//programmet plockar ut tecknen(4 st)
  
  cout << '"' << ut << '"' << " plockas ut" << endl;
  
 return 0;
}
  
  
  
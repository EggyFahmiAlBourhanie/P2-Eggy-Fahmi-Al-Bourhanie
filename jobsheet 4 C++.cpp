#include <iostream>
using namespace std;

int main ()
{
  int a;
  cout << "Masukan Bilangan: ";
  cin >>a;
  if (a>0)
  cout << "Biangan "<<a<<" adalah bilangan positif";
  else if (a<0)
  cout << "Bilangan "<<a<<" adalah bilangan negatif";
  else 
  cout << "Bilangan yang anda masukan adalah 0";
  return 0;
}

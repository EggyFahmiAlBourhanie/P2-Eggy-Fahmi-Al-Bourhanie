#include <iostream>
using namespace std;

int main ()
{
  int a;
  cout << "Masukan Bilangan: ";
  cin >>a;
  if (a%2)
  cout << "Biangan "<<a<<" adalah bilangan ganjil";
  else
  cout << "Bilangan "<<a<<" adalah bilangan genap";
  return 0;
}

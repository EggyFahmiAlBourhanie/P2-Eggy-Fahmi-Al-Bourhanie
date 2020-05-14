#include <iostream>
using namespace std;

int main ()
{
  float a, b;
  cout << "Masukan bilangan pertama: ";
  cin >>a;
  cout << "\nMasukan bilangan kedua: ";
  cin >>b;
  if (a<b)
  cout << " Bilangan Pertama adalah yang terkecil yaitu: "<<a;
  else if(b<a)
  cout << " Bilangan Kedua adalah yang terkecil yaitu: "<<b;
}

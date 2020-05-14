#include <iostream>
using namespace std;

int main ()
{
  float ipk;
  cout << "Masukan IPK anda: ";
  cin >>ipk;
  if (ipk>=3.50)
  cout << "Selamat anda telah lulus Cumlaude   dengan IPK "<<ipk;
  else if (ipk<3.50)
  cout << "Anda lulus dengan IPK "<<ipk;
  else
  cout << "Maaf anda tidak lulus";
}

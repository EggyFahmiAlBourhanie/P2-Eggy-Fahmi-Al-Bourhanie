#include <iostream>
using namespace std;

int main ()
{
  int nilai;
  cout << "Masukan Nilai: ";
  cin >>nilai;
  if (nilai >=85 && nilai <=100)
  cout << "Anda mendapatkan nilai A";
  else if (nilai >=75 && nilai <=84)
  cout << "Anda mendapatkan nilai B";
  else if (nilai >=60 && nilai <=74)
  cout << "Anda mendapatkan nilai C";
  else 
  cout << "Anda harus mengulang";
  return 0;
}

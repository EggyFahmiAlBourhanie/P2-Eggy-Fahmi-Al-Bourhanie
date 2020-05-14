#include <iostream>
using namespace std;

int main ()
{
  float ip;
  cout << "Masukan IP anda: ";
  cin >>ip;
  if (ip >=3.00 && ip <=4.00)
  cout << "SKS yang boleh diambil: 24";
  else if (ip >=2.50 && ip <=2.99)
  cout << "SKS yang boleh diambil: 21";
  else if (ip >=2.00 && ip <=2.49)
  cout << "SKS yang boleh diambil: 18";
  else if (ip >=1.50 && ip <=1.99) 
  cout << "SKS yang boleh diambil: 15";
  else if (ip >=0 && ip <=1.49) 
  cout << "SKS yang boleh diambil: 12";
  else
  cout << "IP yang anda masukan salah";
  return 0;
}

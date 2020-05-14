#include <iostream>
using namespace std;

int main ()
{
  int ipk;
  cout << "Masukan IPK anda: ";
  cin >>ipk;
  switch (ipk)
  {
  	case 4 : cout<<"Anda lulus cumlaude";break;
  	case 3 : cout<<"Anda lulus memuaskan";break;
  	case 2 : cout<<"Anda lulus";break;
  	default : cout<<"Anda tidak lulus";break;
  }
  return 0;
}

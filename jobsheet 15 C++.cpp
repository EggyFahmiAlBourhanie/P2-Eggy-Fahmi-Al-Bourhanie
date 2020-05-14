#include <iostream>
using namespace std;
int main()
{
   int n, x;
   long double pangkat =1;
   cout << "Masukan nilai n: ";
   cin >> n;
   cout << "Perulangan: ";
   cin >> x;
   label:
   	cout <<n;
   	x--;
   	if (x>=0){
   		goto label;
	   }
	   return 0;
}

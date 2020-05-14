#include <iostream>
#include <string>
#include <conio.h>
using namespace std;
int main()
{
   int nilai, n, i;
   long double pangkat =1;
   cout << "Nilai = ";
   cin >> nilai;
   cout << "Pangkat = ";
   cin >> n;
   i =1;
    do
   {
      pangkat =pangkat*nilai;
      i =i+1;
   }
-	    while (!(i>n));
   cout << pangkat << endl;
   getch();
}

#include <iostream>
#include <conio.h>
using namespace std;
int main() {
int a, x, y;
do
{
cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
cout<<"             MENU PILIHAN PAKET               \n";
cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
cout<<"1. Cek Pilihan Paket Internet\n";
cout<<"2. Cek Harga Paket Internet\n";
cout<<"3. Pembelian Paket\n";
cout<<"Pilihan anda(1/2/3): "; cin>>x;
cout<<"\n";
switch(x)
{
case 1:
cout<<"===========Cek Pilihan Paket Internet============";
cout<<" "<<"\n";
cout<<"1. Paket Seharian\n";
cout<<"2. Paket Bulanan\n";
break;
case 2:
cout<<"=========Cek Harga Paket Internet==========";
cout<<" "<<"\n";
cout<<"1. Paket Seharian 30Mb\n";
cout<<"2. Paket Bulanan 5GB\n";
cout<<"Pilih pakaet yang anda ingin cek harganya(1/2): ";
cin>>a;
if (a==1)
{
cout<<"Paket Seharian 30MB dengan harga Rp. 2000\n";
}
else if(a==2)
{
cout<<"Paket Bulanan 5GB dengan harga Rp. 50000\n";
}
else
{
cout<<"\nAnda tidak memilih 1/2.";
}
break;

case 3:
cout<<"=========Pembelian paket=========";
cout<<" "<<"\n";
cout<<"1. Paket Seharian 30Mb Rp. 2000\n";
cout<<"2. Paket Bulanan 5GB Rp. 50000\n";
cout<<"Pilih pakaet yang anda inginkan(1/2): ";cin>>a;
if (a==1)
{
cout<<"Anda Membeli Paket Seharian 30MB Rp. 2000\n";
}
else if(a==2)
{
cout<<"Anda Membeli Paket Bulanan 5GB Rp. 50000\n";
}
else
{
cout<<"\nanda tidak memilih 1/2.";
}
break;
}
cout<<"\n\n jika anda ingin ke Menu Utama tekan(3): ";cin>>y;
}
while(y==3);
getch();

}


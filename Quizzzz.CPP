#include <stdio.h>
#include <iostream.h>
#include <conio.h>
main ()
{
char nama[30], jurusan[30];
float nk, ntgs1, ntgs2, ntgs3, nm, nq, nf, na, t, v, h, a, l, i;

cout<<"nama\t:  "; gets(nama);
cout<<"jurusan\t:  "; gets(jurusan);
cout<<"nilai kehadiran\t:  ";cin>>nk;
cout<<"nilai tugas1\t:  ";cin>>ntgs1;
cout<<"nilai tugas2\t:  ";cin>>ntgs2;
cout<<"nilai tugas3\t:  ";cin>>ntgs3;
cout<<"nilai mid\t:  ";cin>>nm;
cout<<"nilai quiz\t:  ";cin>>nq;
cout<<"nilai final\t:  ";cin>>nf;

getch();
clrscr();

v= nk*20/100;
h= (ntgs1+ntgs2+ntgs3)/3*20/100;
a= nq*20/100;
l= nm*20/100;
i= nf*20/100;
na= v+h+a+l+i;

cout<<"nama\t:  "<<nama<<endl;
cout<<"jurusan\t:  "<<jurusan<<endl;
cout<<"nilai akhir\t:  "<<na<<endl;
getch();
}
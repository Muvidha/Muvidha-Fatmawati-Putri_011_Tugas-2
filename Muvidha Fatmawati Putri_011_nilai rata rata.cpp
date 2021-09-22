#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
main()
{
cout<<"menghitung nilai rata rata mata kuliah pemrograman terstuktur"<<endl;
float nilaipraktikum,nilaiteori,nilaitugas,rata,nilai;
char matakuliah[50];
char sks [20];
char nim [50];
char nama [100];
cout<<"nama mata kuliah : ";cin>>matakuliah;
cin.getline(matakuliah,sizeof(matakuliah));
cout<<"SKS : ";cin>>sks;
cin.getline(sks,sizeof(sks));
cout<<"";
cout<<"NIM : ";cin>>nim;
cin.getline(nim,sizeof(nim));
cout<<"NAMA : ";cin>>nama;
cin.getline(nama,sizeof(nama));
cout<<"nilai praktikum : ";cin>>nilaipraktikum;
std::cout<<"nilai teori : ";cin>>nilaiteori;
std::cout<<"nilai tugas dan final project : ";cin>>nilaitugas;
rata=sqrt(nilaipraktikum*40/100)+(nilaiteori*40/100)+(nilaitugas*20/100);
cout<<"total rata : "<<rata;
return 0;
}

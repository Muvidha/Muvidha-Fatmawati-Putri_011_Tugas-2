#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
main()
{
float a,t,c,k;	
cout<<"menghitung sisi miring segitiga siku siku\n";
cout<<"masukkan alas segitiga : \n";cin>>a;
cout<<"masukkan tinggi segitiga : \n";cin>>t;
c=sqrt (a*a+t*t);
cout<<"panjang sisi miring=\n"<<c;	
cout<<"\tmenghitung keliling segitiga siku siku\n";
cout<<"masukkan alas segitiga : \n";cin>>a;

cout<<"masukan tinggi segitiga : \n";cin>>t;
cout<<"masukkan sisi miring segitiga : \n";cin>>c;
k=a+t+c;
cout<<"keliling segitiga= "<<k;

return 0;
}



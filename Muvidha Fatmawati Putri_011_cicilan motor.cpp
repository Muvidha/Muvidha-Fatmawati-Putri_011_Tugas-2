#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
main()
{
float hargapokok,bunga,cicilan,totalhargamotor,keuntungan,hargamotor,lama;
cout<<"MENGHITUNG CICILAN,TOTAL HARGA CICILAN,DAN KEUNTUNGAN DEALER DARI PEMBELIAN SEPEDA MOTOR"<<endl;
cout<<"\t masukkan harga motor\t(Rp)\t = ";cin>>hargamotor;
cout<<"\t masukkan tempo waktu cicilan\t(bulan)\t = ";cin>>lama;

cout<<"**********-hasil perincian biaya-**********"<<endl;

hargapokok =hargamotor/lama;
bunga = hargapokok*0.1;
cicilan = hargapokok+bunga;
totalhargamotor = cicilan*lama;
keuntungan = totalhargamotor - hargamotor;

cout<<" cicilan (Rp) = "<<cicilan;
cout<<" total (Rp) = "<<totalhargamotor;
cout<<" keuntungan (Rp) = "<<keuntungan;
return 0;
}

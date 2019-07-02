#include <iostream.h>
#include <conio.h>
int main()
{
struct segitiga
{
float keliling;
float luas;
};
segitiga alas,tinggi,miring,x;
cout<<"-----------------------------------------"<<endl;
cout<<"	Menghitung LUAS dan KELILING SEGITIGA  "<<endl;
cout<<"-----------------------------------------"<<endl;
cout<<"======= ANANDA PUTRI SYAVITRI ==========="<<endl;
cout<<"=======	      130533608243    ==========="<<endl;
cout<<"=======	      PTI'13 OFF B    ==========="<<endl;
cout<<"-----------------------**----------------"<<endl;
cout<<"Keterangan: "<<endl;
cout<<"a=sisi alas segitiga"<<endl;
cout<<"b=sisi tinggi segitiga"<<endl;
cout<<"c=sisi miring segitiga"<<endl;
cout<<"a= ";
cin>>alas.luas;
cout<<"b= ";
cin>>tinggi.luas;
cout<<"c= ";
cin>>miring.luas;
cout<<endl;
x.luas=(alas.luas*tinggi.luas)/2;
x.keliling=(alas.luas*miring.luas)/2;
cout<<"Luas Segitiga= "<<x.luas<<" cm"<<endl;
cout<<"Keliling Segitiga= "<<x.keliling<<" cm"<<endl<<endl;
getch();
}


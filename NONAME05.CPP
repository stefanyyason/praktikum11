#include <stdio.h>
#include <conio.h>
#include <iostream.h>
main()
{
struct lingkaran
{
float jari;
float keliling;
float luas;
}
lingkaran;
cout<<"Masukkan jari-jari lingkaran: ";
cin>>lingkaran.jari;
lingkaran.keliling=2*3.14259*lingkaran.jari;
lingkaran.luas=3.14259*lingkaran.jari*lingkaran.jari;
cout<<"Keliling Lingkaran= "<<lingkaran.keliling;
cout<<" Luas Lingkaran= "<<lingkaran.luas;
getch();
}
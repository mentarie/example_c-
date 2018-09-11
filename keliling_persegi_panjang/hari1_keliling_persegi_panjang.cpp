#include <iostream>
using namespace std;

int keliling(int a, int b);
int main()
{
    double p, l; /*double itu bisa masukkin pecahan*/
    cout<<"Masukkan Panjang: ";
    cin>>p;
    cout<<"Masukkan Lebar: ";
    cin>>l;
    cout<<"Maka keliling persegi panjang adalah "<<keliling(p,l);
    return 0;
}

/*menggunakan subprogram*/
int keliling(int a, int b)
{
    int z;
    z = 2*(a+b);

    return z;
}

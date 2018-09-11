#include <iostream>
using namespace std;

double f(double suhu);
double c(double suhu);
int main()
{
    double a;
    double b;
    char z;

    cout<<"PROGRAM KONVERSI SUHU"<<endl;
    cout<<"================================"<<endl;
    cout<<"\nPilih:"<<endl;
    cout<<"a.Celcius ke Fahrenheit"<<endl;
    cout<<"b.Fahrenheit ke Celcius"<<endl;
    cin>>z;

    if(z == 'a')
    {
        cout<<"Masukkan suhu dalam celcius "<<endl;
        cin>>a;
        cout<<"Maka suhu sama dengan "<<f(a)<<endl;
        cout<<"Kenapa begitu? karena : "<< a <<" * 9/5 + 32 = "<< f(a)<<endl;
    }
    else
    {
        cout<<"Masukkan suhu dalam fahrenheit "<<endl;
        cin>>b;
        cout<<"Maka suhu sama dengan "<<c(b)<<endl;
        cout<<"Kenapa begitu? karena : "<< b <<" * 5/9 - 32 = "<< c(b)<<endl;
    }
}

double f(double suhu)
{
    double fahrenheit;
    fahrenheit = 9/5.0*suhu+32;

    return fahrenheit;
}

double c(double suhu)
{
    double celcius;
    celcius = 5/9.0*suhu-32;

    return celcius;
}

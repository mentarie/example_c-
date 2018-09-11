#include <iostream>
using namespace std;

int main()
{
    int x;
    int a, b, c ,d;

    cin>>x;

    //ambil digit ke 4 : 1234%10 adalah 1230 maka sisa 4
    d=x%10;
    //ambil digit ke 3 : 1234%100 adalah
    c=x%100;
    c=c/10;
    //ambil digit ke 2
    b=x%1000;
    b=b/100;
    //ambil digit ke 1
    a=x/1000;

    cout<<d<<c<<b<<a;
}

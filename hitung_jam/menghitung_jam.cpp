#include <iostream>
using namespace std;

int main()
{
    int j,m,t;
    int awal, baru;
    int jb, mb;

    cout<<"PROGRAM PENAMBAHAN JAM"<<endl;
    cout<<"============================="<<endl;
    cout<<"masukkan jam "<<endl;
    cin>>j;
    cout<<"masukkan menit"<<endl;
    cin>>m;
    cout<<"masukkan tambahan menit"<<endl;
    cin>>t;

    j   =j*60;
    awal=j+m;
    baru=awal+t;
    jb  =baru/60;
    mb  =baru%60;
    jb  =jb%24;

    //apabila jam < 10 dan menit < 10 maka format penulisannya jadi "0"<<jb<<":"<<"0"<<mb
    if(jb<10)
    {
        if(mb<10)
        {
            cout<<"0"<<jb<<":0"<<mb;
        }
        else
        {
            cout<<"0"<<jb<<":"<<mb;
        }
    }
    else
    {
        if(mb<10)
        {
            cout<<jb<<":0"<<mb;
        }
        else
        {
            cout<<jb<<":"<<mb;
        }
    }

}

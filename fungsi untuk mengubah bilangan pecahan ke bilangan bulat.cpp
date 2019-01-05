#include<iostream>
using namespace std;
typedef struct pecahan
{
    int pb;
    int py;
};
int main(int argc, char*argoZ[])
{
    pecahan p1, p2;
    cout<<"MENGUBAH BILANGAN PECAHAN KE BILANGAN BULAT"<<endl;
    cout<<"==========================================="<<endl;
    cout<<"Masukkan pembilang : ";
    cin>>p1.pb;
    cout<<"Masukkan penyebut : ";
    cin>>p2.py;
    cout<<"\t"<<p1.pb<<endl;
    cout<<"\tpl = "<<endl;
    if("/")
    {
        cout<<"Hasilnya = "<<(p1.pb)/(p2.py)<<endl;
    }
    return 0;
}

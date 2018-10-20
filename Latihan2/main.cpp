#include <iostream>

using namespace std;

int main()
{
    int i,n,max,min,nilai;

    cout<<"===Menentukan Bilangan Terbesar & Terkecil==="<< endl;
    cout<<"Masukan Banyak Bilangan:";
    cin>> n;
    cout<<"Masukan Nilai ke =";
    cin>> nilai;

    max=nilai;
    min=nilai;

    for(i=2;i<=n;i++) //dapat dibaca i akan membaca di nilai ke2 dimana i kurang dari samadengan n,i akan menambah 1 angka dan seterusnya.
    {

        cout<<"Masukan Nilai Ke"<<i<<"=";
        cin>>nilai;

        if (nilai>max) max=nilai;
        if (nilai<min) min=nilai;
    }
    cout<<"Nilai Terbesar Adalah:" <<max<<"\nNilai Terkecil Adalah:"<<min;
    cout << "Hello world!" << endl;
    return 0;
}

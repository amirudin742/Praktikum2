#include <iostream>

using namespace std;

int main()
{
     int A,B,C;
    cout<<"Masukan Bilangan 1:";
    cin >> A;

    cout<<"Masukan Bilnagan 2:";
    cin >> B;

    cout<<"Masukan Bilangan 3:";
    cin >> C;
    if (A>C)
        cout << "Masukan Terbesar Adalah :" << A;
    else
        cout << "Masukan Terbesar Adalah :" << C;
    if (B>C)
    cout << "Masukan Terbesar Adalah :" << B;
    else
    cout << "Masukan Terbesar Adalah :" << C;

    cout << "Hello world!" << endl;
    return 0;
}

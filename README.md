# Praktikum2


1.Latihan 1 membuat penentuan terbesar dari 3 bilangan.
   a. Mendeklarasi variabel int a,b,c, sebagai variabel
   b. Menginput nilai a,b,c
   c. Membandingkan nilai a,b,c dengan rumus if berikut kodenya
	
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


2. Ini Hasilnya

	![img](https://raw.githubusercontent.com/amirudin742/Praktikum2/1fa96d11666a201324d8b711dafdf27d2e5a7e23/Hasil1.png)
	![img](https://raw.githubusercontent.com/amirudin742/Praktikum2/master/Hasilnya/Hasil2.png)
	![img](https://raw.githubusercontent.com/amirudin742/Praktikum2/master/Hasilnya/HAsil%203.png)


3.Latihan2 membuat penentuan terbesar dan terkecil dari 4 variabel. -Mendeklarasikan variabel n,nilai sebagai variabel input -Mendeklarasikan variabel i sebagai pembatas inputan/perulangan -Mendeklarasikan max sebagai nilai terbesar dan min nilai terkecil -Menginputkan nilai n dimana menunjukan banyak angka yang akan di input -menginputkan nilai nilai yang akan di bandingkan. Berikut kode lengkapnya

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


4. Ini Hasilnya Dari Latihan2
	
	![img](https://raw.githubusercontent.com/amirudin742/Praktikum2/master/Hasil2/Hasil1.png)
	![img](https://raw.githubusercontent.com/amirudin742/Praktikum2/master/Hasil2/Hasil2.png)
	![img](https://raw.githubusercontent.com/amirudin742/Praktikum2/master/Hasil2/Hasil3.png)
	![img](https://raw.githubusercontent.com/amirudin742/Praktikum2/master/Hasil2/Hasil4.png)
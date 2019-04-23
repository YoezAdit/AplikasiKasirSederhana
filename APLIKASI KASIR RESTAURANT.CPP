#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>

using namespace std;

/* FINAL PROJECT ALGORITMA & PEMPROGRAMAN
    - ADITYA WIJAYA (1810631170083)
    - LUXANFAKHRI DIENO PUTRA (1810631170016)
    KELAS 2G FASILKOM UNSIKA */

void garis();
void mainmenu();
void daftarmakanan();
void pesan();

main()
{
system("color b");
string user,pass;
char chr;
login:
 cout<<"\t\t";garis(); cout<<endl;
    cout<<"\t\t-=-=-=-=- WILUJENG SUMPING =-=-=-=-"<<endl;
    cout<<"\t\t-=-=-=-= SKYWING RESTAURANT -=-=-=-"<<endl;
    cout<<"\t\t-=-=-=- Jl. HS.Ronggo Waluyo =-=-=-"<<endl;
    cout<<"\t\t";garis(); cout<<endl;
    cout<<" \t\t|||    >>> SILAHKAN LOGIN <<<   |||"<<endl;
    cout<<"\t\t"; garis(); cout<<endl;
    cout << "\t\tNama Pengguna : "; cin >> user;
    cout << "\t\tKata Sandi : ";
		chr=_getch();
		while(chr != 13)
            {
            pass.push_back(chr);
            cout<<'*';
            chr=_getch();
            }
    home:
	if (user=="admin" && pass=="admin")
	{
	    system("cls");
	    mainmenu();
        getch();
	}
	else
	{
		system("cls");
		cout<<"\n\n Nama Pengguna atau Kata Sandi Salah, Silahkan Coba Lagi!!"<<endl;
		goto login;
		return 0;
	}
}

void garis()
{
    cout<<"=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=";
}

void mainmenu()
{
    int a;
    system ("cls");
    system ("color c");
    cout<<"\t\t"<<"-=-";garis(); cout<<"-=-"<<endl;
    cout<<"\t\t|        >>   LOGIN BERHASIL!  <<       |"<<endl;
    cout<<"\t\t"<<"===";garis(); cout<<"==="<<endl;
    cout<<"\t\t|            WILUJENG SUMPING           |"<<endl;
    cout<<"\t\t|           SKYWING RESTAURANT          |"<<endl;
    cout<<"\t\t|          Jl. HS.Ronggo Waluyo         |"<<endl;
    cout<<"\t\t"<<"===";garis(); cout<<"==="<<endl;
    cout<<"\t\t|                                       |"<<endl;
    cout<<"\t\t|    1. DAFTAR MENU MAKANAN & MINUMAN   |"<<endl;
    cout<<"\t\t|    2. PEMESANAN                       |"<<endl;
    cout<<"\t\t|    3. KELUAR                          |"<<endl;
    cout<<"\t\t|                                       |"<<endl;
    cout<<"\t\t"<<"===";garis(); cout<<"==="<<endl;
    cout<<"\t\tMasukan Pilihan Anda : "; cin>>a;
    switch(a)
    {
    case 1:
        daftarmakanan();
        break;
    case 2:
        pesan();
        break;
    }
}

void daftarmakanan()
{
    char f;
    system("cls");
    system ("color a");
    cout << endl;
    cout << endl;
    cout << ""<<"=-=-=-=-";garis(); cout<<"-=-=-=-="<<endl<<endl;
    cout << "|           DAFTAR MENU MAKANAN & MINUMAN         |"<<endl;
    cout << ""<<"=-=-=-=-";garis(); cout<<"-=-=-=-="<<endl<<endl;
    cout << "|-------------------------------------------------|\n";
    cout << "| PAKET |DAFTAR MAKANAN|DAFTAR MINUMAN|   HARGA   |\n";
    cout << "|-------------------------------------------------|\n";
    cout << "|   A   | Ayam Geprek  | Jus Jambu    | RP. 20.000|\n";
    cout << "|   B   | Mie Ayam     | Es Teh Manis | Rp. 15.000|\n";
    cout << "|   C   | Nasi Goreng  | Es Jeruk     | RP. 19.000|\n";
    cout << "|   D   | Nasi Rames   | Es Kelapa    | Rp. 20.000|\n";
    cout << "|   E   | Sate Ayam    | Es Teh Manis | RP. 23.000|\n";
    cout << "|   F   | Nasi Bakar   | Jus Alpukat  | RP. 28.000|\n";
    cout << "|   G   | Pecel Lele   | Teh Hangat   | RP. 15.000|\n";
    cout << "|   H   | Lontong Tahu | Teh Hangat   | RP. 14.000|\n";
    cout << "|   I   | Garang Asem  | Es Kopi      | RP. 20.000|\n";
    cout << "|   J   | Sate Kambing | Jus Mangga   | RP. 30.000|\n";
    cout << "|-------------------------------------------------|\n\n";
    cout<<""<<"=-=-=-=-";garis(); cout<<"-=-=-=-="<<endl<<endl;
    cout << "\nPilih 1 Untuk Kembali ke Menu Utama ";
    cout << "\nPilih 2 Untuk Memesan ";
    cout << "\nMasukan Pilihan Anda : ";
    cin >> f;
    if(f == '1')
    {
        mainmenu();
    }
    if(f == '2')
    {
        pesan();
    }
    getch();
}

void pesan()
{
    char *nm_mkn,*nm_mnm,kd_paket,pilihan2,nampel[15];
    float jum_bel,harga,bayar,kembalian,total,ppn,diskon,tobar;
    system ("cls");
    paket:
    cout << ""<<"=-=-=-=-";garis(); cout<<"-=-=-=-="<<endl<<endl;
    cout << "|           DAFTAR MENU MAKANAN & MINUMAN         |"<<endl;
    cout << ""<<"=-=-=-=-";garis(); cout<<"-=-=-=-="<<endl<<endl;
    cout << "|-------------------------------------------------|\n";
    cout << "| PAKET |DAFTAR MAKANAN|DAFTAR MINUMAN|   HARGA   |\n";
    cout << "|-------------------------------------------------|\n";
    cout << "|   A   | Ayam Geprek  | Jus Jambu    | RP. 20.000|\n";
    cout << "|   B   | Mie Ayam     | Es Teh Manis | Rp. 15.000|\n";
    cout << "|   C   | Nasi Goreng  | Es Jeruk     | RP. 19.000|\n";
    cout << "|   D   | Nasi Rames   | Es Kelapa    | Rp. 20.000|\n";
    cout << "|   E   | Sate Ayam    | Es Teh Manis | RP. 23.000|\n";
    cout << "|   F   | Nasi Bakar   | Jus Alpukat  | RP. 28.000|\n";
    cout << "|   G   | Pecel Lele   | Teh Hangat   | RP. 15.000|\n";
    cout << "|   H   | Lontong Tahu | Teh Hangat   | RP. 14.000|\n";
    cout << "|   I   | Garang Asem  | Es Kopi      | RP. 20.000|\n";
    cout << "|   J   | Sate Kambing | Jus Mangga   | RP. 30.000|\n";
    cout << "|-------------------------------------------------|\n\n";
    cout<<""<<"=-=-=-=-";garis(); cout<<"-=-=-=-="<<endl<<endl;
    awal:
cout << " Nama Pelanggan : ";
cin >> nampel;
cout << " PIlih Paket [A/B/C/D/E/F/G/H/I/J] : ";
cin >> kd_paket;
cout << " Jumlah Paket : ";
cin >> jum_bel;
cout << "\t--------------------------------------------\n";

if (kd_paket=='A' || kd_paket=='a')
{
nm_mkn="Ayam Geprek";
nm_mnm="Jus Jambu";
harga=20000;
}
else if (kd_paket=='B' || kd_paket=='b')
{
nm_mkn="Mie Ayam";
nm_mnm="Es Teh Manis";
harga=15000;
}
else if (kd_paket=='C' || kd_paket=='c')
{
nm_mkn="Nasi Goreng";
nm_mnm="Es Jeruk";
harga=19000;
}
else if (kd_paket=='D' || kd_paket=='d')
{
nm_mkn="Nasi Rames";
nm_mnm="Es Kelapa";
harga=20000;
}
else if (kd_paket=='E' || kd_paket=='e')
{
nm_mkn="Sate ayam";
nm_mnm="Es Teh Manis";
harga=23000;
}
else if (kd_paket=='F' || kd_paket=='f')
{
nm_mkn="Nasi Bakar";
nm_mnm="Jus Alpukat";
harga=28000;
}
else if (kd_paket=='G' || kd_paket=='g')
{
nm_mkn="Pecel lele";
nm_mnm="Teh Hangat";
harga=15000;
}
else if (kd_paket=='H' || kd_paket=='h')
{
nm_mkn="Lontong tahu";
nm_mnm="Teh Hangat";
harga=14000;
}
else if (kd_paket=='I' || kd_paket=='i')
{
nm_mkn="Garang asem";
nm_mnm="Es Kopi";
harga=20000;
}
else if (kd_paket=='J' || kd_paket=='j')
{
nm_mkn="Sate kambing";
nm_mnm="Jus Mangga";
harga=30000;

}
else
{
cout << "\t| Pilihan Tidak Tersedia, Silahkan Pilih Paket Dengan Benar !! |"<<endl;
cout << "\t--------------------------------------------\n";
goto paket;
}
    cout<<endl;
    cout<<"-=-=-=-= SKYWING RESTAURANT -=-=-=-"<<endl;
    cout<<"-=-=-=- Jl. HS.Ronggo Waluyo =-=-=-"<<endl;

cout << "Nama Pelanggan : "<<nampel<<"\n";
cout << "Nama Makanan   : "<<nm_mkn<<"\n";
cout << "Nama Minuman   : "<<nm_mnm<<"\n";
cout << "Harga          : Rp "<<harga<<"\n";
cout << "_________________________________________\n";

total=jum_bel*harga;
ppn=0.10*total;
if (jum_bel >= 5)
diskon=0.02*harga*jum_bel;
else if (jum_bel < 5)
diskon=0;

tobar=(total+ppn)-diskon;

cout << "Total Harga   : Rp "<<total<<"\n";
cout << "PPN           : Rp "<<ppn<<"\n";
cout << "Diskon        : Rp "<<diskon<<"\n";
cout << "_________________________________________\n";
bayar:
cout << "Total Pembayaran    : Rp "<<tobar<<"\n";
cout << "Uang Yang Dibayar   : Rp ";
cin >> bayar;"\n";
if (bayar < tobar)
{
cout << "_________________________________________\n";
cout << "\tMaaf, Uang Anda Kurang !!!"<<endl;
cout << "_________________________________________\n";
goto bayar;
}
cout << "_________________________________________\n";
kembalian=bayar-tobar;
cout << "Kembalian : Rp "<<kembalian<<"\n";
cout << endl;
cout << "=========================================\n";
cout << endl;
cout << "TERIMA KASIH ATAS KUNJUNGAN ANDA, "<< nampel<<"!!"<<"\n";
cout << endl;

{
cout << "=========================================\n";
cout << "\nINGIN TRANSAKSI ULANG ? [Y/N] : ";
cin >> pilihan2;

switch(pilihan2)
{
case 'Y':
case 'y' :
goto awal;
break;

case'N':
case 'n' :

cout << endl << endl;
cout << "\t\t -=HATUR NUHUN=-";
break;

default:
cout << "PILIHAN SALAH !!!";
}

}

}

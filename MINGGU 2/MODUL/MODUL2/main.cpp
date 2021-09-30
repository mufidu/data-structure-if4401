#include <iostream>

using namespace std;

struct mhs {
    string nama, nim;
    float ipk;
    int semester;
    int kode;
};

int main()
/*
Nama: Muhammad Mufid Utomo
NIM: 1301204441
*/
{
    int jumlah;
    int artcoffee = 0;
    int creative = 0;
    int mental = 0;
    bool isPrime = true;

    cout<<"Jumlah data : ";
    cin>>jumlah;
    cout<<endl;

    mhs arr_mhs[jumlah];

    for (int i=0; i<jumlah; i++) {
        cout<<"Data ke "<<i+1<<endl;
        cout<<"Nama : ";
        cin>>arr_mhs[i].nama;

        cout<<"NIM : ";
        cin>>arr_mhs[i].nim;

        /* cek prodi */
        if (arr_mhs[i].nim.substr(1,1) == "1") {
            cout<<"Prodi Anda adalah Art of Coffee";
            artcoffee++;
            cout<<endl;
        } else if (arr_mhs[i].nim.substr(1,1) == "2") {
            cout<<"Prodi Anda adalah Creative Content";
            creative++;
            cout<<endl;
        } else if (arr_mhs[i].nim.substr(1,1) == "3") {
            cout<<"Prodi Anda adalah Mental Health";
            mental++;
            cout<<endl;
        }
        cout<<"IPK : ";
        cin>>arr_mhs[i].ipk;

        cout<<"Semester : ";
        cin>>arr_mhs[i].semester;

        if (arr_mhs[i].ipk > 3.5 && arr_mhs[i].semester<=8) {
            cout<<"CUMLAUDE";
            cout<<endl;
        }

        cout<<"Kode unik : ";
        cin>>arr_mhs[i].kode;

        /* cek apakah kodenya prima */
        if (arr_mhs[i].kode > 1) {
            for (int i=2; i<=(arr_mhs[i].kode / 2); i++) {
                if (arr_mhs[i].kode % i == 0) {
                    isPrime = false;
                    break;
                }
            }
        } else if (arr_mhs[i].kode == 0 || arr_mhs[i].kode == 1) {
            isPrime = false;
        }

        if (isPrime) {
            cout<<"MAHASISWA BERPRESTASI";
        }

        cout<<endl;
        cout<<endl;
    }
    cout<<".....INPUT DATA SELESAI.....";
    cout<<endl;
    cout<<endl;

    /* cari ipk terbesar */
    int terbesar = -1;
    string mhs_terbesar = "a";
    for (int i=0; i<jumlah; i++) {
        if (arr_mhs[i].ipk > terbesar) {
            terbesar = arr_mhs[i].ipk;
            mhs_terbesar = arr_mhs[i].nama;
        }
    }

    cout<<"IPK terbesar didapatkan oleh "<<mhs_terbesar;
    cout<<endl;
    cout<<"Program Studi Art of Coffee : "<<artcoffee;
    cout<<endl;
    cout<<"Program Studi Creative Content : "<<creative;
    cout<<endl;
    cout<<"Program Studi Mental Health : "<<mental;
}

#include <iostream>
#include "mahasiswa_1301204441.h"

void inputData_1301204441(mahasiswa &M) {
    int i;
    cout<<"Tuliskan NIM : ";
    cin>>M.NIM;

    i = 0;
    for (i = 0; i<MAX; i++) {
        cout<<"Nilai "<<i+1<<": ";
        cin>>M.Nilai[i];
    }
}

float mean_1301204441(mahasiswa M) {
    float total = 0;

    for (int i = 0; i<MAX; i++) {
        total = total + M.Nilai[i];
    };

    return total/MAX;
}

void showData_1301204441(mahasiswa M) {
    cout<<endl<<"Mahasiswa dengan NIM: "<<M.NIM<<endl<<"Memiliki ";
    for (int i = 0; i < MAX; i++) {
        cout<<"Nilai "<<i+1<<": "<<M.Nilai[i]<<", ";
    };
    cout<<endl<<endl;
}

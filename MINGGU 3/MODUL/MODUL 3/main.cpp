#include <iostream>
#include "catalog_1301204441.h"

using namespace std;

int main()
/*
Nama: Muhammad Mufid Utomo
NIM: 1301204441
*/
{
    //Inisiasi Varabel
    catalog storage;
    storage.MAX = 8;
    storage.num = -1;
    //Menambahkan data & Output
    add_data_1301204441(storage, 6);
    view_data_1301204441(storage);
    add_data_1301204441(storage, 4);
    view_data_1301204441(storage);
    add_data_1301204441(storage, 8);
    view_data_1301204441(storage);
    add_data_1301204441(storage, 2);
    view_data_1301204441(storage);
    cout<<endl;
    //mencari index
    int i;
    i = search_data_1301204441(storage, 8);
    cout<<i<<endl;
    i = search_data_1301204441(storage, 5);
    cout<<i<<endl;
    cout<<endl;

    reversed_view_1301204441(storage);
    add_data_1301204441(storage, 5);
    reversed_view_1301204441(storage);
    cout << endl;

    view_data_1301204441(storage);
    delete_data_1301204441(storage);
    view_data_1301204441(storage);
}


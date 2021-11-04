#include "sll.h"

void create_list(listSingle &L)
{
    // Muhammad Mufid Utomo
    // 1301204441
    first(L) = nil;
}

void alokasi(infotype new_data, adrSingle &X)
{
    // Muhammad Mufid Utomo
    // 1301204441
    X = new elmtSingle;
    info(X) = new_data;
    next(X) = nil;
}

void show(listSingle L)
{
    // Muhammad Mufid Utomo
    // 1301204441
    adrSingle P;

    if (first(L) == nil)
    {
        cout<<"List Kosong"<<endl;
    }
    else
    {
        P = first(L);
        while (P != nil)
        {
            cout<<info(P)<<" ";
            P = next(P);
        }
        cout<<endl<<endl;
    }
}

void insert_first(listSingle &L, adrSingle new_data)
{
    // Muhammad Mufid Utomo
    // 1301204441
    if (first(L) == nil)
    {
        first(L) = new_data;
    }
    else
    {
        next(new_data) = first(L);
        first(L) = new_data;
    }
}

void delete_last(listSingle &L, adrSingle &new_data)
{
    // Muhammad Mufid Utomo
    // 1301204441
    adrSingle P = first(L);
    adrSingle Q = nil;
    while (next(P) != nil)
    {
        Q = P;
        P = next(P);
    }
    if (Q == nil)
    {
        first(L) = nil;
    }
    else
    {
        next(Q) = nil;
    }
    new_data = P;
}

void showLessThanX(listSingle L, infotype X)
{
    // Muhammad Mufid Utomo
    // 1301204441
    cout << "Angka yang lebih kecil dari " << X << ": "<< endl;
    adrSingle P = first(L);
    while (P != nil)
    {
        if (info(P) < X)
        {
            cout << info(P) << " ";
        }
        P = next(P);
    }
    cout << endl << endl;
}

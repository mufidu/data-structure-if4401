#include "catalog_1301204441.h"
#include <cstdlib>
#include <stack>
#include <algorithm>
#include <iterator>

using namespace std;

void add_data_1301204441(catalog &C, int x)
/*
Nama: Muhammad Mufid Utomo
NIM: 1301204441
*/
{
    if (C.num != C.MAX)
    {
        C.data[C.num + 1] = x;
        C.num = C.num + 1;
    };
};

void view_data_1301204441(catalog C)
{
    for (int i = 0; i<=C.num; i++)
    {
        cout<<C.data[i]<<" ";
    }

    cout<<endl;
};

int search_data_1301204441(catalog C, int x)
{
    for (int i = 0; i<=C.num; i++)
    {
        if (C.data[i] == x)
        {
            return i;
        }
    }

    return -1;
}

void reversed_view_1301204441(catalog C)
{
    /*
    Nama: Muhammad Mufid Utomo
    NIM: 1301204441
    */
    for (int i = C.num; i>=0; i--)
    {
        cout<<C.data[i];
    }

    cout<<endl;
};

void delete_data_1301204441(catalog &C)
{
    /*
    Nama: Muhammad Mufid Utomo
    NIM: 1301204441
    */
    /*int tempo[C.num-1];
    int num_temp = C.num-1;
    for (int i = 0; i<=C.num-1; i++) {
        tempo[i] = C.data[i];
    };

    int C[C.num-1];

    for (int i = 0; i<=num_temp; i++) {
        C.data[i] = tempo[i];
    };*/

    /*stack<int> newStack;
    for (int i = 0; i<=C.num; i++) {
        newStack.push(C.data[i]);
    };
    newStack.pop();
    C.data = newStack;*/

    /*int newA[C.num-1];
    for (int i=0; i<=C.num-1; i++) {
        newA[i] = C.data[i];
    };
    C.data = *newA;*/

    C.data[C.num] = 0;
};





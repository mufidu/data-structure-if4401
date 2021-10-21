#ifndef CATALOG_H
#define CATALOG_H

#include <iostream>

const int NMAX = 50;

struct catalog
/*
Nama: Muhammad Mufid Utomo
NIM: 1301204441
*/
{
    int data[NMAX];
    int MAX;
    int num;
};

void add_data_1301204441( catalog &C, int x);
void view_data_1301204441( catalog C);
int search_data_1301204441( catalog C, int x);
void reversed_view_1301204441( catalog C );
void delete_data_1301204441 ( catalog &C);

#endif // CATALOG_H


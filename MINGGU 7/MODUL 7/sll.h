#ifndef SLL_H_INCLUDED
#define SLL_H_INCLUDED

#include<iostream>
#include<string>
using namespace std;

#define info(P) (P)->info
#define next(P) (P)->next
#define first(L) ((L).first)
#define nil NULL

typedef int infotype;
typedef struct elmtSingle *adrSingle;

struct elmtSingle
{
    infotype info;
    adrSingle next;
};

struct listSingle
{
    adrSingle first;
};

void create_list(listSingle &L);
void alokasi(infotype new_data, adrSingle &X);
void show(listSingle L);
void insert_first(listSingle &L, adrSingle new_data);
void delete_last(listSingle &L, adrSingle &new_data);
void showLessThanX(listSingle L, infotype X);


#endif // SLL_H_INCLUDED

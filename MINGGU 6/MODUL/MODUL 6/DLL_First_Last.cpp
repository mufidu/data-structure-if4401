#include "DLL_First_Last.h"

using namespace std;

void createList (List &L)
{
    first(L) = nil;
    last(L) = nil;
}

address createElement (infotype dataBaru)
{
    address P;
    P = new elmList;
    info(P) = dataBaru;
    next(P) = nil;
    prev(P) = nil;
    return P;
}

void insertLast (List &L, address P)
{
    if (first(L) == nil)
    {
        first(L) = P;
        last(L) = P;
    }
    else
    {
        next(last(L)) = P;
        prev(P) = last(L);
        last(L) = P;
    }
}

void insertAfter (address Prec, address P, List L)
{

    if (Prec == last(L))
    {
        insertLast(L, P);
    }
    else
    {
        next(P) = next(Prec);
        prev(P) = Prec;
        prev(next(Prec)) = P;
        next(Prec) = P;
    }
}

void deleteFirst (List &L, address &P)
{
    P = first(L);
    if (next(first(L)) == nil)
    {
        first(L) = nil;
        last(L) = nil;
    }
    else
    {
        first(L) = next(first(L));
        prev(first(L)) = nil;
        next(P) = nil;
    }
}

void deleteAfter (address Prec, address &P)
{
    P = next(Prec);
    next(Prec) = next(P);
    prev(next(P)) = prev(P);
    next(P) = nil;
    prev(P) = nil;
}

void printList (List L)
{
    address P = first(L);
    while (P != nil)
    {
        cout << info(P) << " ";
        P = next(P);
    }
    cout << endl;
}

void insertFirst (List &L, address &P)
{
    if (first(L) == nil)
    {
        first(L) = P;
        last(L) = P;
        next(P) = nil;
        prev(P) = nil;
    }
    else
    {
        next(P) = first(L);
        prev(first(L)) = P;
        first(L) = P;
    }
}

void insertAscending (List &L, infotype dataBaru)
{
    address P = createElement(dataBaru);
    if (first(L) == nil)
    {
        insertFirst(L, P);
    }
    else if (info(P) < info(first(L)))
    {
        insertFirst(L, P);
    }
    else if (info(P) > info(last(L)))
    {
        insertLast(L, P);
    }
    else
    {
        address Q = first(L);
        while (info(next(Q)) < info(P))
        {
            Q = next(Q);
        }
        insertAfter(Q, P, L);
    }
}

void deleteLast (List &L, address &P)
{
    P = last(L);
    if (first(L) == last(L))
    {
        first(L) = nil;
        last(L) = nil;
    }
    else
    {
        last(L) = prev(last(L));
        next(last(L)) = nil;
        prev(P) = nil;
    }
}

void deleteElm (List &L, infotype dataHapus)
{
    address P = first(L);
    while (P != nil && info(P) != dataHapus)
    {
        P = next(P);
    }
    
    if (P == first(L))
    {
        deleteFirst(L, P);
    }
    else if (P == last(L))
    {
        deleteLast(L, P);
    }
    else
    {
        deleteAfter(prev(P), P);
    }
    
}

bool findElement (List L, infotype dataDicari)
{
    address P = first(L);
    while (P != nil)
    {
        if (info(P) == dataDicari)
        {
            return true;
        }
        P = next(P);
    }
    return false;
}

int frequencyofElm (List L, infotype dataDicari)
{
    int count = 0;
    address P = first(L);
    while (P != nil)
    {
        if (info(P) == dataDicari)
        {
            count++;
        }
        P = next(P);
    }
    return count;
}
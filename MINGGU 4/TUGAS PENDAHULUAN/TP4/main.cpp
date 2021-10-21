#include "SLL.h"

using namespace std;

int main()
{
//  createList
    List O;
    cout<<"first(O) sebelum createList: "<<first(O)<<endl;
    createList(O);
    cout<<"first(O) sesudah createList: "<<first(O)<<endl;

    cout<<endl;

//  newElement
    adr p;
    p = newElement(120);
    cout<<"Info(P): "<<info(p)<<endl;
    cout<<"Next(P): "<<next(p)<<endl;
    cout<<endl;

//  insertFirst
    cout<<"first(O) sebelum insertFirst: "<<first(O)<<endl;
    insertFirst(O, p);
    cout<<"first(O) setelah insertFirst: "<<first(O)<<endl;
    cout<<"info First(O): "<<info(first(O))<<endl;

    p = newElement(0);
    insertFirst(O, p);
    cout<<"info First(O): "<<info(first(O))<<endl;
    cout<<endl;

//  show
    show(O);

    p = newElement(200);
    insertFirst(O, p);
    show(O);


    p = deleteLast(O);
    show(O);
    return 0;
}

#include "mylist.h"

using namespace std;

int main()
{
//Muhammad Mufid Utomo
//1301204441

    List L;
    address P, temp;
    infotype Mhs;

    createList(L);
    printList(L);

    Mhs = newMahasiswa("Alice", "1301190202", 3.5);
    P = newElement(Mhs);
    insertFirst(L, P);

    Mhs = newMahasiswa("Bob", "1301190203", 4);
    P = newElement(Mhs);
    insertFirst(L, P);

    printList(L);

    Mhs = newMahasiswa("Chihaya", "1301190204", 3.6);
    P = newElement(Mhs);
    insertLast(L, P);

    Mhs = newMahasiswa("Delta", "1301190205", 2.7);
    P = newElement(Mhs);
    insertLast(L, P);

    Mhs = newMahasiswa("Euniche", "1301190206", 3.9);
    P = newElement(Mhs);
    insertFirst(L, P);

    printList(L);

    deleteFirst(L, temp);
    deleteLast(L, temp);

    printList(L);

    List M;
    address Q, tmp;
    infotype mhs;
    string nama, nim;
    float ipk;

    cout<<"Nama: ";
    cin>>nama;
    cout<<endl;

    cout<<"NIM: ";
    cin>>nim;
    cout<<endl;

    cout<<"IPK: ";
    cin>>ipk;
    cout<<endl;

    while (nama != "-" && nim != "-") {
        mhs = newMahasiswa(nama, nim, ipk);
        Q = newElement(mhs);
        insertLast(M, Q);

        cout<<"Nama: ";
        cin>>nama;
        cout<<endl;

        cout<<"NIM: ";
        cin>>nim;
        cout<<endl;

        cout<<"IPK: ";
        cin>>ipk;
        cout<<endl;
    }

    printList(M);

    while (first(M) != nil) {
        deleteLast(M, tmp);

        cout<<"Mahasiswa yang dihapus: "<<endl;
        cout<<"Nama: "<<info(tmp).nama<<endl;
        cout<<"NIM: "<<info(tmp).nim<<endl;
        cout<<"IPK: "<<info(tmp).ipk<<endl<<endl;
    }
}

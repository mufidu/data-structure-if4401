#ifndef MAHASISWA_H
#define MAHASISWA_H
using namespace std;

const int MAX = 5;

struct mahasiswa
{
    string NIM;
    float Nilai[MAX];
};

void inputData_1301204441(mahasiswa &M);
float mean_1301204441(mahasiswa M);
void showData_1301204441(mahasiswa M);

#endif // MAHASISWA_H

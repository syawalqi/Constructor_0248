#include <iostream>
using namespace std;

class mahasiswa
{
    public:
    static int nim;
    int id;
    string nama;

    void setID();

    void printAll();

    mahasiswa(string pnama)
    {
        nama = pnama;
        setID();
    }


};

int mahasiswa::nim = 248;

void mahasiswa::setID()
{
    id = ++nim;
}


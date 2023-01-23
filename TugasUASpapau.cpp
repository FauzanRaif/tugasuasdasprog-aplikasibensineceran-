#include<iostream>
using namespace std;

struct Bensin {
    string jenis;
    int harga;
};

Bensin daftarBensin[3] = {
    {
        "PERTAMAX",
        12000,
    },
    {
        "PERTALITE",
        10000,
    },
    {
        "PERTAMAX TURBO",
        15000,
    },
};

void beliBensin(int jumlahBeli, int nomorJenis) {
      if (jumlahBeli > 0) {
        cout << "Total harga : " << jumlahBeli * daftarBensin[nomorJenis - 1].harga;
    } else {
        cout << "Silahkan masukkan jumlah dengan benar!";
    }
}

int main() {
    int nomorJenis, jumlahBeli;

    cout << "* BENSIN ECERAN PER LITER *\n\n" << endl;

    for (int i = 0; i < 3; i++) {
        cout << i + 1 << ". " << daftarBensin[i].jenis << " : " << daftarBensin[i].harga << "\n";
    }

    cout << "\n";
    cout << "** \n" << endl;
    cout << "\n";
    cout << " Pilih Jenis Bensin : ";
    cin >> nomorJenis;

    cout << "Masukkan jumlah beli : ";
    cin >> jumlahBeli;
    cout << "\n";

    beliBensin(jumlahBeli, nomorJenis);
}

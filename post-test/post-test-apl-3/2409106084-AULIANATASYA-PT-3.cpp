#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

#define max_merch 50

struct Rincian {
    int harga_merch;
    int stok_merch;
};

struct Merchandise {
    string nama_merch;
    Rincian rincian;
    int edisi_merch;
};

Merchandise katalog[max_merch] = {
    {"Scuderia Ferrari Team Hooded Sweat", {2160000, 24}, 2024},
    {"Scuderia Ferrari Drivers Oversize T-Shirt", {1655000, 33}, 2024},
    {"Scuderia Ferrari Team Charles Leclerc Cap", {730000, 35}, 2024},
    {"Scuderia Ferrari Race Jacquard Polo", {140000, 87}, 2025},
    {"Scuderia Ferrari Team Softshell Jacket", {3270000, 65}, 2025},
    {"Scuderia Ferrari Team Carlos Sainz Cap", {645000, 23}, 2024},
};

int panjang_array = 6;

int main() {
    string username_admin, password_admin;
    int batas_login = 3;

    while (batas_login > 0) {
        cout << "==============================================" << endl;
        cout << "       Selamat Datang di Halaman Login!       " << endl;
        cout << "==============================================" << endl;
        cout << "Username: ";
        cin >> username_admin;
        cout << "Password: ";
        cin >> password_admin;

        if (username_admin == "aulianatasya" && password_admin == "084") {
            cout << "Yippie! Login berhasil!" << endl;
            cout << "----------------------------------------------" << endl;
            break;
        } else {
            batas_login--;
            cout << "Login gagal! Sisa percobaan " << batas_login << endl;
            cout << "----------------------------------------------" << endl;
        }
    }

    if (batas_login == 0) {
        cout << "Oopsie! Kesempatan login habis" << endl;
        cout << "----------------------------------------------" << endl;
        return 0;
    }

    int pilihan_menu_merch, index;
    do {
        cout << "==============================================" << endl;
        cout << "    Manajemen Merchandise Scuderia Ferrari    " << endl;
        cout << "==============================================" << endl;
        cout << "1. Merchandise Baru" << endl; 
        cout << "2. Katalog Merchandise" << endl;
        cout << "3. Update Merchandise" << endl;
        cout << "4. Hapus dari Katalog Merchandise" << endl;
        cout << "5. Logout" << endl;
        cout << "Masukan pilihan: ";
        cin >> pilihan_menu_merch;
        cin.ignore();
        cout << "----------------------------------------------" << endl;

        if (pilihan_menu_merch == 1) {
            if (panjang_array < max_merch) {
                cout << "==============================================" << endl;
                cout << "               Merchandise Baru               " << endl;
                cout << "==============================================" << endl;
                cout << "Masukan nama merchandise: ";
                getline(cin, katalog[panjang_array].nama_merch);
                cout << "Masukan harga merchandise: ";
                cin >> katalog[panjang_array].rincian.harga_merch;
                cout << "Masukan stok merchandise: ";
                cin >> katalog[panjang_array].rincian.stok_merch;
                cout << "Masukan edisi merchandise: ";
                cin >> katalog[panjang_array].edisi_merch;
                panjang_array++;
                cout << "Yay! Merchandise berhasil ditambahkan!" << endl;
                cout << "--------------------------------------" << endl;
            } else {
                cout << "Oh naww! Kapasitas penuh! Tidak bisa menambah merchandise lagi!" << endl;
                cout << "---------------------------------------------------------------" << endl;
            }
        }

        else if (pilihan_menu_merch == 2){
            if (panjang_array == 0){
                cout << "Belum ada merchandise nih!" << endl;
            } else {
                cout << "================================================================================" << endl;
                cout << "                               Katalog Merchandise                               " << endl;
                cout << "================================================================================" << endl;
                cout << left << setw(5) << "No" 
                     << setw(45) << "Nama Merchandise" 
                     << setw(15) << "Harga" 
                     << setw(10) << "Stok" 
                     << setw(10) << "Edisi" << endl;
                cout << "--------------------------------------------------------------------------------" << endl;

                for (int i = 0; i < panjang_array; i++){
                    cout << setw(5) << i + 1;
                    cout << setw(45) << katalog[i].nama_merch;
                    cout << setw(15) << katalog[i].rincian.harga_merch;
                    cout << setw(10) << katalog[i].rincian.stok_merch;
                    cout << setw(10) << katalog[i].edisi_merch << endl << endl;
                }
            }
        }

        else if (pilihan_menu_merch == 3) {
            if (panjang_array == 0){
                cout << "Belum ada merchandise yang diubah nih!" << endl;
                cout << "----------------------------------------------" << endl;
            } else {
                cout << "==============================================" << endl;
                cout << "              Update Merchandise              " << endl;
                cout << "==============================================" << endl;
                cout << "Masukan nomor merchandise yang ingin di ubah: ";
                cin >> index;

                if (index > 0 && index <= panjang_array) {
                    cout << "Masukan harga baru: ";
                    cin >> katalog[index - 1].rincian.harga_merch;
                    cout << "Masukan stok baru: ";
                    cin >> katalog[index - 1].rincian.stok_merch;
                    cout << "Yay! Merchandise berhasil diperbaharui!" << endl;
                } else {
                    cout << "Oopsie! Nomor merchandise ga valid nih!" << endl;
                }
                cout << "----------------------------------------------" << endl;
            } 
        }

        else if (pilihan_menu_merch == 4) {
            if (panjang_array == 0){
                cout << "Belum ada merchandise yang dihapus nih!" << endl;
                cout << "----------------------------------------------" << endl;
            } else {
                cout << "==============================================" << endl;
                cout << "               Hapus Merchandise              " << endl;
                cout << "==============================================" << endl;
                cout << "Masukan nomor merchandise yang ingin dihapus: ";
                cin >> index;

                if (index > 0 && index <= panjang_array){
                    for (int i = index - 1; i < panjang_array - 1; i++){
                        katalog[i] = katalog[i + 1];
                    }
                    panjang_array--;
                    cout << "Yay! Merchandise berhasil dihapus!" << endl;
                } else {
                    cout << "Oopsie! Nomor merchandise ga valid nih!" << endl;
                }
                cout << "----------------------------------------------" << endl;
            }  
        }

        else if (pilihan_menu_merch == 5) {
            cout << "Yippie! Logout berhasil!" << endl;
            cout << "----------------------------------------------" << endl;
        }

        else {
            cout << "Pilihan gak valid nih! Coba lagi okai!" << endl;
            cout << "----------------------------------------------" << endl;
        }
    } while (pilihan_menu_merch != 5);

    return 0;
}
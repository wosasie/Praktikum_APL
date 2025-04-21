#include <iostream>

using namespace std;

#include <iostream>
#include <string>
#include <iomanip>
#include <limits>

using namespace std;

#define max_merch 50

// struct rincian ꒰✿´ ꒳ ` ꒱♡
struct Rincian {
    int harga_merch;
    int stok_merch;
};


// nested struct ꒰✿´ ꒳ ` ꒱♡
struct Merchandise {
    string nama_merch;
    Rincian rincian;
    int edisi_merch;
};


// array of struct ꒰✿´ ꒳ ` ꒱♡
Merchandise katalog[max_merch] = {
    {"Scuderia Ferrari Team Hooded Sweat", {2160000, 24}, 2024},
    {"Scuderia Ferrari Drivers Oversize T-Shirt", {1655000, 33}, 2024},
    {"Scuderia Ferrari Team Charles Leclerc Cap", {730000, 35}, 2024},
    {"Scuderia Ferrari Race Jacquard Polo", {140000, 87}, 2025},
    {"Scuderia Ferrari Team Softshell Jacket", {3270000, 65}, 2025},
    {"Scuderia Ferrari Team Carlos Sainz Cap", {645000, 23}, 2024},    
};

int panjang_array = 6;

// fungsi overloading ꒰✿´ ꒳ ` ꒱♡
int tambah(int a, int b) {
    return a + b;
}
double tambah(double a, double b) {
    return a + b;
}


// kurangi stok ꒰✿´ ꒳ ` ꒱♡
int kurang(int a, int b) {
    return a - b;
}


// fungsi login admin ꒰✿´ ꒳ ` ꒱♡
bool admin_login(string username_admin, string password_admin) {
    return (username_admin == "aulianatasya" && password_admin == "084");
}


// merchandise baru ꒰✿´ ꒳ ` ꒱♡
void tambah_merchandise(Merchandise katalog[], int *panjang_array) {
    if (*panjang_array < max_merch) {
        cout << "==============================================" << endl;
        cout << "               Merchandise Baru               " << endl;
        cout << "==============================================" << endl;
        cout << "Masukan nama merchandise: ";
        cin.ignore();
        getline(cin, katalog[*panjang_array].nama_merch);
        cout << "Masukan harga merchandise: ";
        cin >> katalog[*panjang_array].rincian.harga_merch;
        cout << "Masukan stok merchandise: ";
        cin >> katalog[*panjang_array].rincian.stok_merch;
        cout << "Masukan edisi merchandise: ";
        cin >> katalog[*panjang_array].edisi_merch;
        (*panjang_array)++; 
        cout << "Yay! Merchandise berhasil ditambahkan!" << endl;
        cout << "--------------------------------------" << endl;
    } else {
        cout << "Oh naww! Kapasitas penuh! Tidak bisa menambah merchandise lagi!" << endl;
        cout << "---------------------------------------------------------------" << endl;
    }
}


// katalog merchandise ꒰✿´ ꒳ ` ꒱♡
void katalog_merchandise(Merchandise katalog[], int panjang_array) {
    cout << "================================================================================" << endl;
    cout << "                               Katalog Merchandise                               " << endl;
    cout << "================================================================================" << endl;
    cout << left << setw(5) << "No"
         << setw(45) << "Nama Merchandise"
         << setw(15) << "Harga"
         << setw(10) << "Stok"
         << setw(10) << "Edisi" << endl;
    cout << "--------------------------------------------------------------------------------" << endl;

    for (int i = 0; i < panjang_array; i++) {
        cout << setw(5) << i + 1;
        cout << setw(45) << katalog[i].nama_merch;
        cout << setw(15) << katalog[i].rincian.harga_merch;
        cout << setw(10) << katalog[i].rincian.stok_merch;
        cout << setw(10) << katalog[i].edisi_merch << endl << endl;
    }
}


// update merchandise ꒰✿´ ꒳ ` ꒱♡
void update_merchandise(Merchandise katalog[], int *panjang_array, int *index) {
    cout << "==============================================" << endl;
    cout << "              Update Merchandise              " << endl;
    cout << "==============================================" << endl;
    cout << "Masukan nomor merchandise yang ingin di ubah: ";
    cin >> *index;
    cout << fixed << setprecision(0); // ini agar output harga tidak dalam format notasi ilmiah

if (*index > 0 && *index <= *panjang_array) {
    int stok_lama = katalog[*index - 1].rincian.stok_merch;
    double harga_lama = katalog[*index -1].rincian.harga_merch;

    cout << "Nama Barang   : " << katalog[*index - 1].nama_merch << endl;
    cout << "Stok          : " << stok_lama << endl;
    cout << "Harga         : " << harga_lama << endl;
    cout << "----------------------------------------------" << endl;
    cout << "Pilih: " << endl;
    cout << "1. Tambah Stok Merchandise" << endl;
    cout << "2. Kurangi Stok Merchandise" << endl;
    cout << "3. Berikan Diskon Merchandise" << endl;
    cout << "4. Update Harga Merchandise" << endl;
    cout << "----------------------------------------------" << endl;
    cout << "Masukkan pilihan: ";

    int pilihan_update;
    cin >> pilihan_update;
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int jumlah;
    if (pilihan_update == 1) {
        cout << "Masukan jumlah tambahan stok: ";
        cin >> jumlah;
        katalog[*index - 1].rincian.stok_merch = tambah(stok_lama, jumlah);
        cout << "Yay! Stok Merchandise berhasil diperbaharui!" << endl;
    } else if (pilihan_update == 2) {
        cout << "Masukan jumlah stok yang dikurangi: ";
        cin >> jumlah;
        katalog[*index - 1].rincian.stok_merch = kurang(stok_lama, jumlah);
        cout << "Yay! Stok Merchandise berhasil diperbaharui!" << endl;
    } else if (pilihan_update == 3) {
        cout << "Masukan nominal diskon: ";
        double diskon;
        cin >> diskon;
        katalog[*index - 1].rincian.harga_merch = tambah(harga_lama, -diskon);
        cout << "Harga sebelumnya      : " << harga_lama << endl;
        cout << "Harga setelah diskon  : " << katalog[*index - 1].rincian.harga_merch << endl;
        cout << "Yay! Harga Merchandise berhasil diperbaharui!" << endl;
    } else if (pilihan_update == 4) {
        cout << "Masukan harga baru: ";
        cin >> katalog[*index - 1].rincian.harga_merch;
        cout << "Yay! Harga Merchandise berhasil diperbaharui!" << endl;
    } else {
        cout << "Pilihan gak valid nih!" << endl;
        cout << "----------------------------------------------" << endl;
        return;
    }
} else {
    cout << "Pilihan gak valid nih!" << endl;
        cout << "----------------------------------------------" << endl;
}

}


// hapus merchandise ꒰✿´ ꒳ ` ꒱♡
void hapus_merchandise(Merchandise katalog[], int *panjang_array, int *index) {
    cout << "==============================================" << endl;
    cout << "               Hapus Merchandise              " << endl;
    cout << "==============================================" << endl;
    cout << "Masukan nomor merchandise yang ingin dihapus: ";
    cin >> *index;

    if (*index > 0 && *index <= *panjang_array) {
        for (int i = *index - 1; i < *panjang_array - 1; i++) {
            katalog[i] = katalog[i + 1];
        }
        (*panjang_array)--;
        cout << "Yay! Merchandise berhasil dihapus!" << endl;
    } else {
        cout << "Oopsie! Nomor merchandise ga valid nih!" << endl;
    }
    cout << "----------------------------------------------" << endl;
}


// menu utama ꒰✿´ ꒳ ` ꒱♡
void menu_utama(Merchandise katalog[], int *panjang_array) {
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
        cout << "----------------------------------------------" << endl;

        switch (pilihan_menu_merch) {
            case 1:
                tambah_merchandise(katalog, panjang_array);
                break;
            case 2:
                katalog_merchandise(katalog, *panjang_array);
                break;
            case 3:
                update_merchandise(katalog, panjang_array, &index);
                break;
            case 4:
                hapus_merchandise(katalog, panjang_array, &index);
                break;
            case 5:
                cout << "Yippie! Logout berhasil!" << endl;
                cout << "----------------------------------------------" << endl;
                break;
            default:
                cout << "Pilihan gak valid nih! Coba lagi okai!" << endl;
                cout << "----------------------------------------------" << endl;
        }
    } while (pilihan_menu_merch !=5);
}


// program utama ꒰✿´ ꒳ ` ꒱♡
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

        if (admin_login(username_admin, password_admin)) {
            cout << "Yippie! Login berhasil!" << endl;
            cout << "----------------------------------------------" << endl;
            menu_utama(katalog, &panjang_array);
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
    }

    return 0;

}



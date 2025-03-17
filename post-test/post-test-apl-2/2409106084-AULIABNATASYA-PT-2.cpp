#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

#define max_merch 100
int panjang_array = 6;

int main(){
    string katalog_merch[max_merch] = {
        "Scuderia Ferrrari Team Hooded Sweat",
        "Scuderia Ferrrari Drivers Oversize T-Shirt",
        "Scuderia Ferrrari Team Charles Leclerc Cap",
        "Scuderia Ferrrari Race Jacquard Polo",
        "Scuderia Ferrrari Team Softshell Jacket",
        "Scuderia Ferrrari Team Carlos Sainz Cap"
    };
    int harga_merch[max_merch] = {2160000, 1655000, 730000, 140000, 3270000, 645000};
    int stok_merch[max_merch] = {24, 32, 34, 55, 20, 12};
    int edisi_merch[max_merch] = {2025, 2024, 2024, 2025, 2025, 2024};

    string username_admin, password_admin;
    int batas_login = 3;

    while (batas_login > 0){
        cout << "Selamat Datang di Halaman Login!" << endl;
        cout << "Username: ";
        cin >> username_admin;
        cout << "Password: ";
        cin >> password_admin;

        if (username_admin == "admin" && password_admin == "5555"){
            cout << "Yippie! Login berhasil!" << endl;
            break;
        } else {
            batas_login --;
            cout << "Login gagal! ";
            cout << "Sisa percobaan " << batas_login << endl;
        }
    }
    if (batas_login == 0){
        cout << "Oopsie! Kesempatan login habis" << endl;
        return 0;
    }

    int pilihan_menu_merch, index;
    do {
        cout << "===== Manajemen Merchandise Schuderia Ferrari ====" << endl;
        cout << "1. Merchandise Baru" << endl; 
        cout << "2. Katalog Merchandise" << endl;
        cout << "3. Update Merchandise" << endl;
        cout << "4. Hapus dari Katalog Merchandise" << endl;
        cout << "5. Logout" << endl;
        cout << "Masukan pilihan: ";
        cin >> pilihan_menu_merch;
        cin.ignore();

        if (pilihan_menu_merch == 1){
            if (panjang_array < max_merch){
                cout << "Masukan nama merchandise: ";
                cin.ignore();
                getline(cin, katalog_merch[panjang_array]);
                cout << "Masukan harga merchandise: ";
                cin >> harga_merch[panjang_array];
                cout << "Masukan stok merchandise: ";
                cin >> stok_merch[panjang_array];
                cout << "Masukan edisi merchandise: ";
                cin >> edisi_merch[panjang_array];

                panjang_array++;
                cout << "Yay! Merchandise berhasil ditambahkan!" << endl;
            } else {
                cout << "Oh naww! Kapasitas penuh nih! Sorry ga bisa nambah merchandise lagi ya!" << endl;
            }
        }

        else if (pilihan_menu_merch == 2){
            if (panjang_array == 0){
                cout << "Belum ada merchandise nih!" << endl;
            } else {
                cout << "\n===== Katalog Merchandise =====" << endl << endl;
                cout << left << setw(5) << "No" 
                     << setw(45) << "Nama Merchandise" 
                     << setw(15) << "Harga" 
                     << setw(10) << "Stok" 
                     << setw(10) << "Edisi" << endl;
                cout << "---------------------------------------------------------------------------------" << endl;

                for (int i = 0; i < panjang_array; i++){
                    cout << setw(5) << i + 1 
                         << setw(45) << katalog_merch[i]
                         << setw(15) << harga_merch[i]
                         << setw(10) << stok_merch[i] 
                         << setw(10) << edisi_merch[i] << endl << endl;
                }
            }
        }

        else if (pilihan_menu_merch == 3){
            if (panjang_array == 0){
                cout << "Belum ada merchandise yang diubah nih!" << endl;
            } else {
                cout << "Masukan nomor merchandise yang ingin di ubah: ";
                cin >> index;

                if (index > 0 && index <= panjang_array){
                    cout << "Masukan harga baru: ";
                    cin >> harga_merch[index - 1];
                    cout << "Masukan stok baru: ";
                    cin >> stok_merch[index - 1];

                    cout << "Yay! Merchandise berhasil diperbaharui!" << endl;
                } else {
                    cout << "Oopsie! Nomor merchandise ga valid nih!" << endl;
                }
            } 
        }

        else if (pilihan_menu_merch == 4){
            if (panjang_array == 0){
                cout << "Belum ada merchandise yang dihapus nih!" << endl;
            } else {
                cout << "Masukan nomor merchandise yang ingin dihapus: ";
                cin >> index;

                if (index > 0 && index <= panjang_array){
                    for (int i = index - 1; i < panjang_array - 1; i++){
                        katalog_merch[i] = katalog_merch[i + 1];
                        harga_merch[i] = harga_merch[i + 1];
                        stok_merch[i] = stok_merch[i + 1];
                        edisi_merch[i] = edisi_merch[i + 1];
                    }
                    panjang_array--;
                    cout << "Yay! Merchandise berhasil dihapus!" << endl;
                } else {
                    cout << "Oopsie! Nomor merchandise ga valid nih!" << endl;
                }
            }  
        }
        
        else if (pilihan_menu_merch == 5){
            cout << "Yippie! Logout berhasil!" << endl;
            break;
        }
        
        else {
            cout << "Pilihan gak valid nih! Coba lagi okai!" << endl;
        }
    } while (pilihan_menu_merch !=5);

    return 0;

}
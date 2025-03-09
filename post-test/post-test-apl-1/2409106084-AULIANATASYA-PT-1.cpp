#include <iostream>

using namespace std;

int main(){
    string username_nama, password_nim;
    int batas_login = 3;

    while (batas_login > 0){
        cout << "Selamat Datang di Halaman Login!" << endl;
        cout << "Username: ";
        cin >> username_nama;
        cout << "Password: ";
        cin >> password_nim;

        if (username_nama == "sasa" && password_nim == "2409106084"){
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
    
    int pilihan_menu_utama;
    while (true){
        cout << "  Menu Utama  " << endl;
        cout << "1. Konversi Mata Uang" << endl << "2. Konversi Jarak" << endl;
        cout << "3. Konversi Waktu" << endl << "4. Logut" << endl;
        cout << "Pilih menu: " << endl;
        cin >> pilihan_menu_utama;

        if ( pilihan_menu_utama == 1){
            int konversi_mata_uang;
            double jumlah;

            cout << "  Konversi Mata Uang  " << endl;
            cout << "1. Rupiah ke Dolar AS" << endl << "2. Rupiah ke Euro" << endl;
            cout << "3. Dolar As ke Rupiah" << endl << "4. Dolar AS ke Euro" << endl;
            cout << "5. Euro ke Rupiah" << endl << "6. Euro ke Dolar AS" << endl;
            cin >> konversi_mata_uang;

            if (konversi_mata_uang == 1){
                cout << "Masukkan nominal uang: " << endl;
                cin >> jumlah;
                cout << "Hasil konversi Rupiah ke Dolar: " << jumlah * 0.000065 << "Dolar AS" << endl;   
            } else if (konversi_mata_uang == 2){
                
            }
        }
    }
}
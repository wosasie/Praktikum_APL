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
        cout << "Menu Utama" << endl;
        cout << "1. Konversi Mata Uang" << endl << "2. Konversi Jarak" << endl;
        cout << "3. Konversi Waktu" << endl << "4. Logout" << endl;
        cout << "Pilih menu: ";
        cin >> pilihan_menu_utama;

        if ( pilihan_menu_utama == 1){
            int konversi_mata_uang;
            double jumlah;

            cout << "Konversi Mata Uang" << endl;
            cout << "1. Rupiah ke Dolar AS" << endl << "2. Rupiah ke Euro" << endl;
            cout << "3. Dolar As ke Rupiah" << endl << "4. Dolar AS ke Euro" << endl;
            cout << "5. Euro ke Rupiah" << endl << "6. Euro ke Dolar AS" << endl;
            cout << "7. Kembali" << endl;
            cout << "Masukan pilihan: ";
            cin >> konversi_mata_uang;

            if (konversi_mata_uang == 1){
                cout << "Masukkan nominal uang: ";
                cin >> jumlah;
                cout << "Hasil konversi Rupiah ke Dolar AS: " << jumlah * 0.000065 << "USD" << endl;   
            } else if (konversi_mata_uang == 2){
               cout << "Masukan nominal uang: ";
               cin >> jumlah;
               cout << "Hasil konversi Rupiah ke Euro: " << jumlah * 0.000061 << "EUR" << endl;
            } else if (konversi_mata_uang == 3){
                cout << "Masukan nominal uang: ";
                cin >> jumlah;
                cout << "Hasil konversi Dolar AS ke Rupiah: " << jumlah * 15400 << "IDR" << endl;
            } else if (konversi_mata_uang == 4){
                cout << "Masukan nominal uang: ";
                cin >> jumlah;
                cout << "Hasil konversi Dolar AS ke Euro: " << jumlah * 0.94 << "EUR" << endl;
            } else if (konversi_mata_uang == 5){
                cout << "Masukan nominal uang: ";
                cin >> jumlah;
                cout << "Hasil konversi Euro ke Rupiah: " << jumlah * 16400 << "IDR" << endl;
            } else if (konversi_mata_uang == 6){
                cout << "Masukan nominal uang: ";
                cin >> jumlah;
                cout << "Hasil konversi Euro ke Dolar AS: " << jumlah * 1.06 << "USD" << endl;                
            } else if (konversi_mata_uang == 7){
                cout << "Mari kembali ke menu utama!";
                break;
            } else {
                cout << "Pilihan gak valid nih! Coba lagi okai!";
            }

        }
        else if (pilihan_menu_utama == 2){
            int konversi_jarak;
            double jumlah;

            cout << "Konversi Jarak" << endl;
            cout << "1. Kilometer ke Meter" << endl << "2. Kilometer ke Centimeter" << endl;
            cout << "3. Meter ke Kilometer" << endl << "4. Meter ke Centimeter" << endl;
            cout << "5. Centimeter ke Kilometer" << endl << "6. Centimeter ke Meter" << endl;
            cout << "7. Kembali" << endl;
            cout << "Masukan pilihan: ";
            cin >> konversi_jarak;

            if (konversi_jarak == 1){
                cout << "Masukkan jarak: ";
                cin >> jumlah;
                cout << "Hasil konversi Kilometer ke Meter: " << jumlah * 1000 << "M" << endl;
            } else if (konversi_jarak == 2){
                cout << "Masukkan jarak: ";
                cin >> jumlah;
                cout << "Hasil konversi Kilometer ke Centimeter: " << jumlah * 100000 << "CM" << endl;
            } else if (konversi_jarak == 3){
                cout << "Masukkan jarak: ";
                cin >> jumlah;
                cout << "Hasil konversi Meter ke Kilometer: " << jumlah * 0.001 << "KM" << endl;
            } else if (konversi_jarak == 4){
                cout << "Masukkan jarak: ";
                cin >> jumlah;
                cout << "Hasil konversi Meter ke Centimeter: " << jumlah * 1000 << "CM" << endl;
            } else if (konversi_jarak == 5){
                cout << "Masukkan jarak: ";
                cin >> jumlah;
                cout << "Hasil konversi Centimeter ke Kilometer: " << jumlah * 1000 << "KM" << endl;
            } else if (konversi_jarak == 6){
                cout << "Masukkan jarak: ";
                cin >> jumlah;
                cout << "Hasil konversi Centimeter ke Kilometer: " << jumlah * 1000 << "M" << endl;
            } else if (konversi_jarak == 7){
                cout << "Mari kembali ke menu utama!";
                break;
            } else {
                cout << "Pilihan gak valid nih! Coba lagi okai!";
            }
        }
        else if (pilihan_menu_utama == 3){
            int konversi_waktu;
            double jumlah;

            cout << "Konversi Waktu" << endl;
            cout << "1. Jam ke Menit" << endl << "2. Jam ke Detik" << endl;
            cout << "3. Menit ke Jam" << endl << "4. Menit ke Detik" << endl;
            cout << "5. Detik ke Jam" << endl << "6. Detik ke Menit" << endl;
            cout << "7. Kembali" << endl;
            cout << "Masukan pilihan: ";
            cin >> konversi_waktu;

            if (konversi_waktu == 1){
                cout << "Masukkan waktu: ";
                cin >> jumlah;
                cout << "Hasil konversi Jam ke Menit: " << jumlah / 60 << "menit" << endl;
            } else if (konversi_waktu == 2){
                cout << "Masukkan waktu: ";
                cin >> jumlah;
                cout << "Hasil konversi Jam ke Detik: " << jumlah * 3600 << "detik" << endl;
            } else if (konversi_waktu == 3){
                cout << "Masukkan waktu: ";
                cin >> jumlah;
                cout << "Hasil konversi Menit ke Jam: " << jumlah / 60 << "jam" << endl;
            } else if (konversi_waktu == 4){
                cout << "Masukkan waktu: ";
                cin >> jumlah;
                cout << "Hasil konversi Menit ke Detik: " << jumlah * 60 << "detik" << endl;
            } else if (konversi_waktu == 5){
                cout << "Masukkan waktu: ";
                cin >> jumlah;
                cout << "Hasil konversi Detik ke Jam: " << jumlah / 3600 << "jam" << endl;
            } else if (konversi_waktu == 6){
                cout << "Masukkan waktu: ";
                cin >> jumlah;
                cout << "Hasil konversi Detik ke Menit: " << jumlah / 60 << "menit" << endl;
            } else if (konversi_waktu == 7){
                cout << "Mari kembali ke menu utama!";
                break;
            } else {
                cout << "Pilihan gak valid nih! Coba lagi okai!";
            }
        }
        else if (pilihan_menu_utama == 4){
            cout << "Yippie! Logout berhasil!" << endl;
            break;
        } else {
            cout << "Pilihan gak valid nih! Coba lagi okai!" << endl;
        }
    }
    return 0;
} 
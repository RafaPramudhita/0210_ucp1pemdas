// 1.#Integer
//  umur = 19
//  #String
//   nama = "rafa"
//  #Boolean
//  pelajar = true
// 2.int penjumlahan( int a, int b)
//  {
//    return a + b;
//  }
// 3.int main()
//  {
//    string pilihan;
//     do
//     {
//         cout << "makan" << endl;
//         cout << "main game" << endl;
//         cout << "ibadah" << endl;
//         cout << "apakah anda masih hidup? (Yes/no)";
//       cin >> pilihan;
// 
//     } while (pilihan == "Yes");
//  }
// 4.#Conditional statement
// x = 10
// if x > 5:
//     print("x lebih besar dari 5")
// else:
//     print("x kurang dari atau sama dengan 5")
// 5.struct Mahasiswa 
// {
// 	int nim;
// 	string nama;
// 	string alamat;
// 	int umur;
// };


#include <iostream>
using namespace std;

int main() {
    string nama[100];
    float sensor1[100], sensor2[100], sensor3[100];
    string status[100];
    string pilihan;
    int jumlah_lokasi = 0;

    do {
       
        cout << "Masukkan nama lokasi: ";
        cin >> nama[jumlah_lokasi];
        cout << "Masukkan nilai sensor 1 di lokasi " << nama[jumlah_lokasi] << ": ";
        cin >> sensor1[jumlah_lokasi];
        cout << "Masukkan nilai sensor 2 di lokasi " << nama[jumlah_lokasi] << ": ";
        cin >> sensor2[jumlah_lokasi];
        cout << "Masukkan nilai sensor 3 di lokasi " << nama[jumlah_lokasi] << ": ";
        cin >> sensor3[jumlah_lokasi];

        
        double rata_rata = (sensor1[jumlah_lokasi] + sensor2[jumlah_lokasi] + sensor3[jumlah_lokasi]) / 3.0;

        
        if (rata_rata > 75 || sensor1[jumlah_lokasi] == 45 || sensor2[jumlah_lokasi] == 45 || sensor3[jumlah_lokasi] == 45) {
            status[jumlah_lokasi] = "Tidak Sehat";
        } else {
            status[jumlah_lokasi] = "Sehat";
        }

        
        cout << "\nNama\t\tStatus" << endl;
        for (int i = 0; i <= jumlah_lokasi; i++) {
            cout << nama[i] << "\t\t" << status[i] << endl;
        }

        
        int total_sehat = 0;
        int total_tidak_sehat = 0;
        for (int i = 0; i <= jumlah_lokasi; i++) {
            if (status[i] == "Sehat") {
                total_sehat++;
            } else {
                total_tidak_sehat++;
            }
        }
        cout << "\nTotal lokasi dengan kualitas udara Sehat: " << total_sehat << endl;
        cout << "Total lokasi dengan kualitas udara Tidak Sehat: " << total_tidak_sehat << endl;

        jumlah_lokasi++;

        
        cout << "\nApakah ingin mengulang program? (y/n): ";
        cin >> pilihan;
    } while (pilihan == "y" || pilihan == "Y");

return 0;
}
#include <iostream>
using namespace std;

int arr[20];      //membuat array panjang data 20
int n;            //membuat variable inputan n

void input (){ //procedure input
    while (true){
        cout << "Masukan Jumlah Data Pada Array : ";
        cin >> n;

        if (n <= 20){
            break;
        }
        else{
            cout << "\nArray Tidak Boleh Lebih dari 20\n";
        }
    }
    cout << endl;
    cout << "==============================================";
    cout << "=========Masukkan Element Array===============";
    cout << "==============================================";

    for (int i = 0; i < n; i++ ){
        cout << "Data ke-" << (i+1) << ": ";
        cin >> arr[i];
    }
}

void insertionsort(){  //procedure insertion sort

}
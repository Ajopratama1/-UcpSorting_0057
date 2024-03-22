//1.yang pertama dilakukan adalah memisahkan bilangan terkecil dari sublist,lalu mengurutkan
//bilangan tersebut,setelah tersusun bilangan yang dipisahkan sebulumnya akan di masukan 
//kembali kedalam sublist,dilakuan berulang hinggga bilangan tersebut menjadi urut
//2.dengan memindahkan posisi bilangan satu per satu dalam sublist hinggga bilangan dalam 
//sublist menjadi urut
//3.dengan melihat index






#include <iostream>
using namespace std;

int ajo[57];
int n;

void input() {  
    while (true) {
        cout << "Masukan banyaknya elemen pada array : "; 
        std::cin >> n;  
        if (n <= 57) 
        break; 
        else {     
            cout << "Array dapat mempunyai maksimal 57 elemen.\n"; 
        }
    }

    cout << endl;
    cout << "====================" << endl;
    cout << "Masukan Elemen Array" << endl;
    cout << "====================" << endl;

    for (int i = 0; i < n; i++) { 
        cout << "Data ke -" << (i + 1) << ": "; 
        cin >> ajo[i];                          

    }
}

void insertionSort()
{

    int i, temp, j;


    for (i = 0; i <= n - 1; i++) { 
        temp = ajo[1]; 
        j = i - 1; 
        while (j >= 0 && ajo[j] > temp) 
        {
            ajo[j + 1] = ajo[1]; 
            j = j - 1; 
        }
        ajo[j + 1] = temp; 

        for (int k = 0; k < n; k++) {
            cout << ajo[k] << " ";      
        }
    }

}void display() {
    cout << endl;
    cout << "=================================" << endl;
    cout << "Element Array yang telah tersusun" << endl;
    cout << "=================================" << endl;
    cout << endl;
    for (int j = 0; j < n; j++) {
        if (j < n - 1) {
            cout << " -->";
        }
    }
    cout << endl;
    cout << endl;

    cout << "Jumlah pass = " << n - 1 << endl; 
    cout << endl;
    cout << endl;

}


int main()
{
    input();

    insertionSort();
    display();

    return 0;
}
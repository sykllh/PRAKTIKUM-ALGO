//membuat library
#include <iostream>
using namespace std;

int a [20];
int n;

void input()
{
    while (true)
    {
        cout << "Masukkan panjang array : ";
        cin >> n;

        if (n <=20)
        {
            break;
        }
    else
    {
            cout << "ERROR : Maksimal input array adalah 20/n";
    }
    }
    
        cout << endl;
        cout << "=====================" << endl;
        cout << "Masukkan elemen Array" << endl;
        cout << "=====================" << endl;

        for (int i = 0; i < n; i++) //i++ /i = i+1
        {
            cout << "Masukkan nilai ke - " << i + 1 << " : ";
            cin >> a[i];
        }
    }

    void display()
    {
        cout << endl;
        cout << "==========================" << endl;
        cout << "Elemen Array telah terurut" << endl;
        cout << "==========================" << endl;

        for (int i = 0; i < n; i++)
        {
            cout << "Data ke - " << i << " : " << a[i] << endl;
        }
    }

    void BubbleSort()
    {
        cout << "\n================" <<endl;
        cout << "Hasil Setiap Pass" << endl;
        cout << "==================" << endl;
        for (int pass = 1; pass < n; pass++)
        {
            for (int j = 0; j <= n -1 - pass; j++)
            {
                if (a[j] > a[j + 1])
                {
                    int temp = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = temp;
                }
            }
            cout << "Pass ke -" << pass << ":\t";
            for (int k = 0; k < n; k++)
            {
                cout << a[k] << "\t";
            }
            cout << endl;
        }
    }

    int main()
    {
        input();
        BubbleSort();
        display();
        return 0;
    }
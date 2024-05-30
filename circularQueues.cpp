#include <iostream>
using namespace std;

class Queues {
private:
    int FRONT, REAR, max = 5;
    int queue_array[5];

public:
    Queues()
    {
        FRONT = -1;
        REAR = -1;
    }

    void insert()    {
        int num;
        cout << "Enter a number: ";
        cin >> num;
        cout << endl;
        // Cek apakah antrian Penuh
        if ((FRONT == 0 && REAR == max - 1) || (FRONT == REAR + 1))
        {
            cout << "\nQueue overflow\n";
            return;
        }
        // Cek apakah antrian Kosong
        if (FRONT == -1)
        {
            FRONT = 0;
            REAR = 0;
        }
        else
        {
            // Jika REAR berapa di posisi terakhir array, kembali ke awal array
            if (REAR == max - 1)
                REAR = 0;
            else
                REAR = REAR + 1;
        }
        queue_array[REAR] = num;
    }

    void Remove()
    {
        // Cek apakah antrian Kosong
        if (FRONT == -1)
        {
            cout << "Queue underflow\n";
            return;
        }
        cout << "\nThe element delete from the queue is :" << queue_array[FRONT] << "\n";
        // Cek jika antrian hanya memiliki Satu elemen
        if (FRONT == REAR)
        {
            FRONT = -1;
            REAR = -1;
        }
        else
        {
            // jika element yang dihapus berada di posisi trakhir array, kembali ke awal array
            if (FRONT == max - 1)
                FRONT = 0;
            else
                FRONT = FRONT + 1;
        }
    }

    void Display()
    { 
        int FRONT_Position = FRONT;
        int REAR_Position = REAR;

        // Cek apakah antrian Kososng
        if (FRONT_Position == -1)
        {
            cout << "Queue is empty\n";
            return;
        }

        cout << "\nElements in the are...";
    }
};
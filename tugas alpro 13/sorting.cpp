#include <iostream>
#include <chrono>

using namespace std;
using namespace std::chrono;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int arr[] = {5, 8, 2, 1, 6, 3, 7, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

cout << "array awal : ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout<<endl;

    auto start = high_resolution_clock::now();
    cout << "Start time: " << duration_cast<milliseconds>(start.time_since_epoch()).count() << " milliseconds" << endl;


    cout<<endl;
    bubbleSort(arr, n);

    cout << "array yang sudah di sorting : ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    /*for(int i = 0; i <10000;i++){

    }*/

    cout<<endl;
    auto stop = high_resolution_clock::now();
    cout << "Stop time: " << duration_cast<milliseconds>(stop.time_since_epoch()).count() << " milliseconds" << endl;

    cout<<endl;
    auto duration = duration_cast<nanoseconds>(stop - start);
     cout << "Waktu pencarian: " << duration.count() << " milliseconds " << endl;

    return 0;
}
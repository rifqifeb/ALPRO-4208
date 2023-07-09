#include <iostream>
#include <chrono>

using namespace std;
using namespace std::chrono;



int binarysearch(int arr[], int n, int searchkey) {
    int left = 0;
    int right = n - 1;
    int middle = 0;

    while (left <= right) {
        middle = (left + right) / 2;
        if (arr[middle] == searchkey)
            return middle;
        else if (searchkey < arr[middle])
            right = middle - 1;
        else
            left = middle + 1;
    }
    return -1;
}

int main() {
    int L[11] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};


    auto start = high_resolution_clock::now();
    cout << "Start time: " << duration_cast<milliseconds>(start.time_since_epoch()).count() << " milliseconds" << endl;

    int hasil = binarysearch(L, 11, 8);

    /*for(int i = 0; i <10000;i++){

    }*/
    auto stop = high_resolution_clock::now();
    cout << "Stop time: " << duration_cast<milliseconds>(stop.time_since_epoch()).count() << " milliseconds" << endl;

    auto duration = duration_cast<nanoseconds>(stop - start);

    cout << "Ditemukan di index ke- " << hasil << endl;

    cout << "Waktu pencarian: " << duration.count() << " milliseconds " << endl;

    return 0;
}
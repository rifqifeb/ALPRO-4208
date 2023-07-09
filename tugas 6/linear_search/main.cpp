#include <iostream>

using namespace std;

int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    int numbers[] = {5, 2, 9, 7, 1, 6};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int target = 7;

    int result = linearSearch(numbers, size, target);
    if (result != -1) {
        cout << "Angka " << target << " ditemukan pada indeks " << result << endl;
    } else {
        cout << "Angka " << target << " tidak ditemukan" << endl;
    }

    return 0;
}
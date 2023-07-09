#include <iostream>

using namespace std;

int binarySearch(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1;
}

int main() {
    int numbers[] = {1, 2, 5, 6, 7, 9};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int target = 7;

    int result = binarySearch(numbers, size, target);
    if (result != -1) {
        cout << "Angka " << target << " ditemukan pada indeks " << result << endl;
    } else {
        cout << "Angka " << target << " tidak ditemukan" << endl;
    }

    return 0;
}
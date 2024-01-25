#include <iostream>
using namespace std;

int binary_search(int arr[], int size, int item) {
    int low = 0;
    int high = size - 1;
    int guess, mid;
    int k = 0;
    while (low <= high) {
        mid = (low + high)/2;
        guess = arr[mid];
        if (guess == item) {
            return mid;
        }
        if (guess > item) {
            high = mid - 1;
            ++k;
        }
        else {
            low = mid + 1;
            ++k;
        }
    }
    return -1;
}

int main() {
    int mas[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int x;
    cin >> x;
    cout << binary_search(mas, sizeof(mas)/sizeof(mas[0]), x);
    return 0;
}

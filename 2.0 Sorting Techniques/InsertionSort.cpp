#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<int>& arr) {
    int n = arr.size();

    for (int i = 1; i < n; ++i) {
        int key = arr[i];
        int j = i - 1;

        // Shift larger elements to the right
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        // Place key at correct position
        arr[j + 1] = key;
    }
}
int main() {
    vector<int> arr = {64, 25, 12, 22, 11};
    insertionSort(arr);
    for (int i : arr)
        cout << i << " ";
    return 0;
}
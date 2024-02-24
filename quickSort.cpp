//Quick Sort

#include <iostream>
#include <vector>

using namespace std;
template <typename T>
int partition(vector<T>& arr, int low, int high) {
    T pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
           swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[high]);
    return i + 1;
}

template <typename T>
void quickSort(std::vector<T>& arr, int low, int high) {
    if (low < high) {
        int pivotIndex = partition(arr, low, high);

        quickSort(arr, low, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, high);
    }
}

int main() {
    vector<int> arr = {12, 11, 13, 5, 6, 7};
    int arr_size = arr.size();

    cout << "Original array: ";
    for (int i = 0; i < arr_size; i++) {
        cout << arr[i] << " ";
    }

    quickSort(arr, 0, arr_size - 1);

    cout << "\nSorted array: ";
    for (int i = 0; i < arr_size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

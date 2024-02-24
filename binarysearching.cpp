//Binary Searching

#include<iostream>
using namespace std;

int binarySearch(int arr[], int low, int high, int number_to_search_for){
    while(low<=high){
        int mid = low + (high-low)/2;

        if(number_to_search_for == arr[mid]){
            return mid;
        }
        if(number_to_search_for > arr[mid]){
            low = mid + 1;
        }
        if(number_to_search_for < arr[mid]){
            high = mid - 1;
        }
    }
    return -1;
}

int main(void){
    int arrayOfNums[] = {2,4,7,9,18,13,20};

    int n = sizeof(arrayOfNums) / sizeof(arrayOfNums[0]);

    int result = binarySearch(arrayOfNums, 0,n-1,9);

    if(result == -1){
        cout<<"Element doesn't exist in the array";
    }
    else{
        cout<<"The index of the element is "<<result;
    }
}  
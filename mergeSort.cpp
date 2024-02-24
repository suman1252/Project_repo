//Merge Sort

// write a program of merge sort
#include <iostream>
using namespace std;
void printarray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<" \n ";
}

void merge(int arr[], int lb, int mid, int ub)
{
    int i, j, k, b[100];
    i = lb;
    j = mid + 1;
    k = lb;

    while (i <= mid && j <= ub)
    {
        if (arr[i] < arr[j])
        {
            b[k] = arr[i];
            i++, k++;
        }
        else
        {
            b[k] = arr[j];
            j++, k++;
        }
    }
    while (i <= mid)
    {
        b[k] = arr[i];
        k++, i++;
    }

    while (j <= ub)
    {
        b[k] = arr[j];
        j++, k++;
    }

    for (i = lb; i <= ub; i++)
    {
        arr[i] = b[i];
    }
}

void mergesort(int arr[], int lb, int ub)
{
    int mid;
    if (lb < ub)
    {
        mid = (lb + ub) / 2;
        mergesort(arr, lb, mid);
        mergesort(arr, mid + 1, ub);
        merge(arr, lb, mid, ub);
    }
}

int main()
{
    int arr[] = {9, 14, 4, 8, 7, 5, 6};
    int n = 7;
    printarray(arr, n);
    mergesort(arr, 0, 6);
    printarray(arr, n);
    return 0;
}
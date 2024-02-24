//Insertion sorting

#include<iostream>
using namespace std;

void insertion_sort(int arr[],int n){
    int key;
    
    for(int i=1;i<n;i++){
        key = arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i] <<" ";
    }
}
int main(){
    int n=5;
    int arr[n] = {12,14,17,11,15};
    insertion_sort(arr,n);
    return 0;
}
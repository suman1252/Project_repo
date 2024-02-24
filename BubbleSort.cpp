//Bubble sorting

#include<iostream>
using namespace std;

void bubbleSort(int arr[],int n){
   // int i,j;
    for (int i=0;i<n-1;i++)
        for(int j=0;j<n-i-1;j++)
            if(arr[j]>arr[j+1])
                swap(arr[j], arr[j+1]);  
}
 
int main(){
    int i,j;
      int arr[] ={9,5,6,3,11};
       int n = sizeof(arr)/sizeof(arr[0]);
       bubbleSort(arr,n);
       cout<<"Sorted array: \n";
       for(int j=0;j<n;j++)
       {
        cout<<arr[j]<<" ";
       }
  
    return 0;
}
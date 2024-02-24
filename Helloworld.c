// Online C compiler to run C program online
/*  #include <stdio.h>
void storeTable(int arr[][10],int n,int m,int number);
int main() {
    int tables[2][10];
    storeTable(tables,0,10,2);
    storeTable(tables,1,10,3);
    
    for(int i=0;i<10;i++){
        printf("%d\t",tables[0][i]);
    }
    for(int i=0;i<10;i++){
        printf("%d\t",tables[1][i]);
    }
    printf("\n");
    return 0;
}
void storeTable(int arr[][10],int n,int m,int number){
    for(int i=0;i<n;i++){
        arr[n][m] = number*(i+1);
    }
}  */

#include<stdio.h>
//using namespace std;

int main( ){
   
    int a[5]={2,7,6,4,8};
    int temp;
    for(int i=0;i<5-1;i++){
        for(int j=0;j<5-i-1;j++){
            if(a[j]>a[j+1])
            temp =a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
            {
               printf("%d",a[j],a[j+1]);
            }
    }
} 
}    

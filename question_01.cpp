#include<bits/stdc++.h>
using namespace std;
void merge(int arr[],int L[],int size1,int R[],int size2){
    int i = 0;
    int j = 0;
    int k = 0;

    while (i < size1 && j < size2)
    {
       if(L[i] >= R[j]){
            arr[k] = L[i];
            i++;
       }
       else{
        arr[k] = R[j];
        j++;
       }
       k++;
    }

    while (i <size1)
    {
        arr[k] = L[i];
        i++;
    }

    while ( j < size2)
    {
        arr[k] = R[j];
        j++;
    }
    
    
    
}
void mergeSort(int arr[],int size){
    if(size <= 1) return ;

    int mid = size/ 2;
    int L[mid];
    int R[size-mid];

    for (int i = 0; i < mid; i++)
    {
        L[i] = arr[i];
    }
    
    for (int i = mid; i < size; i++)
    {
        R[i-mid] = arr[i];
    }

    mergeSort(L,mid);
    mergeSort(R,size-mid);
    merge(arr,L,mid,R,size-mid);
}
int main(){
 
    int n;
    cin>> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    mergeSort(arr,n);

    for (int i = 0; i < n; i++)
    {
        cout<< arr[i]<<" ";
    }
    
    
    return 0;
}
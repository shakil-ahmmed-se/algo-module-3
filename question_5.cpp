#include<bits/stdc++.h>
using namespace std;
void mergeSorted(int arr1[],int arr2[],int size1,int size2,int mergeArray[]){
    int i = 0;
    int j = 0;
    int k = 0;
    while (i < size1 && j < size2)
    {
        if(arr1[i] >= arr2[j]){
            mergeArray[k] = arr1[i];
            i++;
        }
        else{
            mergeArray[k] = arr2[j];
            j++;
        }
        k++;
    }
    while (i <size1)
    {
        mergeArray[k] = arr1[i];
        i++;
        k++;
    }
    while (j < size2)
    {
        mergeArray[k] = arr2[j];
        j++;
        k++;
    }
    
    
    

}

int main(){
    int n1,n2;
    cin>> n1;
    int arr1[n1];
    for (int i = 0; i < n1; i++)
    {
        cin>>arr1[i];
    }
    cin>>n2;
    int arr2[n2];
    for (int i = 0; i < n2; i++)
    {
        cin>> arr2[i];
    }
    int mergeSize = n1 + n2;
    int mergeArray[mergeSize];
    mergeSorted(arr1,arr2,n1,n2,mergeArray);
    for (int i = 0; i < mergeSize; i++)
    {
        cout<< mergeArray[i]<<" ";
    }
    
    
    
    return 0;
}
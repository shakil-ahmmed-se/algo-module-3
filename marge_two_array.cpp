#include<bits/stdc++.h>
using namespace std;
void mergeSortArray(int arr1[],int arr2[], int size1, int size2, int mergearray[]){
    int i = 0; // index for arr1
    int j = 0 ; // index for arr2
    int k = 0; // index for mergearray

    // merge the two array while both have elements
    while (i < size1 && j < size2)
    {
        if(arr1[i] <= arr2[j]){
            mergearray[k] = arr1[i];
            i++;
            
        }
        else{
            mergearray[k] = arr2[j];
            j++;
            
        }
        k++;
    }

    while (i < size1)
    {
        mergearray[k] = arr1[i];
        i++;
        k++;
    }
    

     while (j < size2)
    {
        mergearray[k] = arr2[j];
        j++;
        k++;
    }
    
    

}

int main(){
    int arr1[] = {1 , 3 , 5 , 7, 9};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = {2, 4, 6, 8 , 10};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    int mergeSize = size1 + size2;
    int mergearray[mergeSize];

    // call the mergeSortArray 
    mergeSortArray(arr1,arr2,size1,size2,mergearray);

    //print the value;
    for (int i = 0; i < mergeSize; i++)
    {
        cout<< mergearray[i]<<" ";
    }
    


    return 0;
}
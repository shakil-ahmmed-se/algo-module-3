#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int k;
    cin>> k;
    int flag = false;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] == k){
            count++;
            if(count> 1){
                flag = true;
            }
        }
    }
    if(flag) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;

    return 0;
}
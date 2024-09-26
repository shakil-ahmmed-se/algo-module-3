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
    int x;
    cin>>x;
    bool flag = false;
    int index = -1;
    for (int i = 0; i < n; i++)
    {
        
        if(arr[i] == x){
            flag = true;
            index = i;
           break;
        }
    }
    
    if(flag) cout<<  index<<endl;
    else cout<<"Not Found"<<endl;
    return 0;
}
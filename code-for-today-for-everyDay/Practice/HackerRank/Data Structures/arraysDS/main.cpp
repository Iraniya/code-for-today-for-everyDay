#include <iostream>
#include <stdio.h>
#include <algorithm>
#include<vector>

using namespace std;


int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    vector<int> rarr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
    }
    for(int i=0;i<n;i++){
        rarr[i]=arr[n-1-i];
    }
    for(int i=0;i<n;i++){
        cout<<rarr[i]<<" ";
    }
    return 0;
}

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,d;
    cin >>n>>d;
    vector<int>a(n);
    for(int a_i=0;a_i<n;a_i++){
        cin>>a[a_i];
    }

    //this work but take more time using single array
    /*
    while(d){
        for(int a_i=0;a_i<n-1;a_i++){
            int temp =a[a_i];
            a[a_i]=a[a_i+1];
            a[a_i+1]=temp;
        }
        d--;
    }

    */
    //sort methods to just display using two array

    for(int a_i=0;a_i<n;a_i++){

        cout<<a[a_i]<<" ";
    }

    return 0;
}

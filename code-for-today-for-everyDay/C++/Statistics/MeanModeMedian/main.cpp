#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

float funcMean(int n, float arr[]) {
    float mean = 0;
    float sum = 0;
    for(int i = 0; i <n; i++) {
        sum = sum + arr[i];
    }
    mean = sum/n;
    return mean;
}

float funcMedian(int n, float arr[]) {
    float median = 0;
    float sum  = 0;
    sort(arr,arr+n);
    int index = 0;
    if(n%2==0){
        index = n/2;
        sum = arr[index] + arr[index-1];
        median = sum/2;
    }
    else {
        index = n/2;
        median = arr[index];

    }
    return median;
}

int funcMode(int n, float arr[]){

}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;
    float arr[n];
    for (int i =0; i<n; i++) {
        cin>>arr[i];
    }

    float mean = funcMean(n, arr);
    float median = funcMedian(n, arr);
    int mode     = funcMode(n,arr);
    cout << setprecision(1) << std::fixed;
    cout<<mean<<endl;
    cout<< setprecision(1) << std::fixed;
    cout<<median<<endl;
    cout<<mode;
    return 0;
}

#include<iostream>
using namespace std;
#include<stdio.h>


double pow(double a, int n){
    double ret =1;
    while(n){
        if(n%2==1)ret*=a;
        a*=a;
        n/=2;
    }
    return ret;
}

int main(){
    cout<<pow(2,3);
    return 0;
}

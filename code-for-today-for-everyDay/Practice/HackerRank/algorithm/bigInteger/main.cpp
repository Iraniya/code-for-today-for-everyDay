#include <iostream>
#include<stdio.h>

using namespace std;


int fact(int n){
    if(n==1){n;}
     else
        n= n*fact(n-1);
     return n;
}
int main()
{
    long long int n;
    cin>>n;
    n=fact(n);

    cout << n << endl;
    return 0;
}


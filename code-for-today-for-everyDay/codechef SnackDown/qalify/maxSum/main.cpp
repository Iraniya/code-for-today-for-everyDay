#include <iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int T;
    cin>>T;

    while (T--) {
       int N;
       cin >>N;
       int arr[N];

       //loop to store arry
       for(int i =0;i<N;i++){
           scanf("%d",&arr[i]);
       }


       int max =0;
       for(int i=0;i<N;i++){
           for(int j=0;j<N;j++){
           max =max+ arr[i];
           }
       }
       printf("%d",max);

    }

    return 0;
}


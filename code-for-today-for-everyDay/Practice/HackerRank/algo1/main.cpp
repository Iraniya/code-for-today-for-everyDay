#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//
int main() {
    int n;
    int sum1,sum2,sum;
    int a[150][150];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
         }
     }
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            if(i==j){
            sum1=sum1+a[i][j];}
         }
      }
     for(int i=0;i<n;i++){
         for(int j=n-i-1;j>=0;j-=n){
                sum2=sum2+a[i][j];
            }
       }
     if(sum1>sum2){
    sum= sum1-sum2;
     }
     else
         sum=sum2-sum1;
    printf("%d",sum);
    return 0;
}

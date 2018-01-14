#include <iostream>
#include <stdio.h>
#include <cmath>
#include <cstdio>
#include <vector>
#include <algorithm>

#define max(a,b){(a>b)?a:b}
using namespace std;

int knapsack(int n, int Sum, int dp[][1000])
{
   if ( n < 0 || Sum < 0 )
       return 0;
   if(n==0||Sum==0)
   {
       dp[Sum][n] = 0;
       return 0;
   }
   if (arr[n-1] == Sum)
   {
       dp[Sum][n-1] = arr[n-1];
       return arr[n-1];
   }

   else if (dp[Sum][n] != -1)
       return dp[Sum][n];

   else if(arr[n-1] > Sum)
   {
       dp[Sum][n] = knapsack(arr,n-1,Sum,dp);
       return dp[Sum][n];
   }
   else //gets selected or doesn't get selected
   {
           dp[Sum][n] = max( arr[n-1] + knapsack(arr,n-1,(Sum-arr[n-1]),dp) , knapsack(arr,n-1,Sum,dp) );
           return dp[Sum][n];
   }
}



int main()
{
    int t,n,k;

    cin>>t;

    while(t){
        cin >>n;
        cin>>k;
        int ai[n];
        for(int i=0;i<n;i++){
            cin>>ai[i];
            }
        int sum;// = knapsack(ai,n,k,dp);
        printf("%d",&sum);
        t--;
    }

    return 0;
}

/*  Given n, find the number of different ways to write n as the
 *  sum of 1,3,4

    Example : n=5, answer 6,
    5 = 1+1+1+1+1
      = 1+1+3
      = 1+3+1
      = 3+1+1
      = 1+4
      = 4+1

      Dn = dn-1 + dn-3 + dn-4
      base case d0 = d1 =d2 = 1 d3 = 2
*/


#include <iostream>
#include <stdio.h>

using namespace std;

void ways(int n){
    int d[n];
    d[0]=d[1]=d[2]= 1;
    d[3]=2;
    int sum = 0;
    for(int i =4;i<=n;i++){
        d[i]=d[i-1]+d[i-3]+d[i-4];

    }
    printf("%d",d[n]);

}

int main()
{
    ways(5);
    return 0;
}


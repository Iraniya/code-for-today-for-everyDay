#include <iostream>
#include<stdio.h>


using namespace std;

int height(int n){
    if(n==0){
        return 1;
    }
    else if(n==1){
        int h=n+n;
        n--;
        height(n);
        return h;
        }
    else if()

}
int main()
{
    int t,h;
    scanf("%d",&t);
    while(t){
        int n;
        scanf("%d",&n);
        h=height(n);

        t--;
    }
    printf("%d",h);
    return 0;
}


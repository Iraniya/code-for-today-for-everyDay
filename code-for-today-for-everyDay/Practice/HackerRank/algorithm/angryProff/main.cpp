#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int t,n,k,ni;


    scanf("%d",&t);
    while(t){
        int present=0;
        scanf("%d %d",&n,&k);
        for(int i=0;i<n;i++){
            scanf("%d",&ni);
            if(ni<=0){
                present++;
            }

        }
        if(present<k)
        printf("YES");
        else
            printf("NO");

        printf("\n");
        t--;
    }
return 0;
}


#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int t,positive=0,negative=0,zero=0;
    scanf("%d",&t);
    int a;
    for(int i=0;i<t;i++) {
        scanf("%d",&a);
        if(a>0){
            positive++;
        }
        else if(a==0){
            zero++;}
        else
            negative++;
     }

    //printf("%d %d %d\n", positive,negative,zero);
    float positive1= (float)positive/t;
    float negative1= (float)negative/t;
    float zero1    = (float)zero/t;
    printf("%.3f\n%.3f\n%.3f", positive1,negative1,zero1);

    return 0;
}


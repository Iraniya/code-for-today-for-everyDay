#include <iostream>
#include<stdio.h>

using namespace std;

int main()

{
    int T;
    cin>>T;
    while (T--) {

        int N;
        cin>>N;

        int A[N];
        int B[N];
        int answer =0;

        //array input for a1,a2,...aN;
        for(int i =0;i<N;i++){
            scanf("%d",&A[i]);
        }

        //array input for b1,b2,b3.....bN
        for(int j=0;j<N;j++){
            scanf("%d",&B[j]);
        }

        for(int i=N-1;i!=0;i--){
            A[i]=A[i]-A[i-1];
        }

        for(int i=0;i<N;i++){
            if(B[i]<=A[i]){
                answer++;
            }
        }

        printf("%d\n",answer);

    }

    return 0;
}


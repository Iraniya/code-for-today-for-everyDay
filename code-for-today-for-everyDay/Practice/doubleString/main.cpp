#include<iostream>
#include<stdio.h>

//#define MAX 100
#define max(a,b) (((a)>(b))?(a):(b))
#define min(a,b) (((a)<(b))?(a):(b))

using namespace std;

int mat[110][110];

int solve(int x){
    int k,l;
    if(x==l)
        return mat[0][0];
    for(k=x-2;k>=0;k--){
        for(l=0;l<=k;l++){
            mat[k][l] += max(mat[k+l][l],mat[k+l][l+1]);
        }
    }

    return mat[0][0];
}


int main(){
    int i,j,k,l,w;
    scanf("%d",&j);
    int x;

    for(i=0;i<j;i++){
        scanf("%d",&x);
        for(k=0;k<x;k++){
            for(l=0;l<k+1;l++){
                scanf("%d",&w);
                mat[k][l]=w;
            }
        }
        printf("%d",solve(x));
    }

 return 0;}

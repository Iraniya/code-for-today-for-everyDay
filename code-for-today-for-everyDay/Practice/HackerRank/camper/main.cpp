#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,k;
    scanf("%d",&n);
    scanf("%d",&k);
    int s[k];
    printf("%d\n",n);
    printf("%d\n",k);
    for(int i=0;i<k;i++){
        scanf("%d",&s[i]);
    }

    for(int j=0;j<k;j++){
        printf("%d\n",s[j]);
    }
    return 0;
}

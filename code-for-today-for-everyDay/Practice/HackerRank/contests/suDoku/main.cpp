#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

        string a[9][9];
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                scanf("%c",&a[i][j]);
            }
        }

        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                printf("%c",a[i][j]);
            }
            printf("\n");
        }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}

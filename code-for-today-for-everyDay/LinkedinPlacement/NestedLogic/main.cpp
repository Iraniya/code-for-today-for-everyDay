#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int D_a,M_a,Y_a;
    int D_e,M_e,Y_e;
    int fine =0;
    cin >> D_a;
    cin >> M_a;
    cin >> Y_a;
    cin >> D_e;
    cin >> M_e;
    cin >> Y_e;

    if(Y_a>Y_e)
        fine = 10000;
    else if (M_a>M_e && Y_a==Y_e)
        fine = (-M_e+M_a)*500;
    else if(M_e==M_a && Y_a==Y_e)
        fine = (-D_e + D_a)*15;

    cout <<fine;

    return 0;
}

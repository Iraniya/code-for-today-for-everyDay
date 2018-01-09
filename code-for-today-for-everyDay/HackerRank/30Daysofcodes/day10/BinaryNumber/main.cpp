#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>


using namespace std;

int decimal_binary(int n)  /* Function to convert decimal to binary.*/
{
    int rem,count=0,t=0;
    while (n>0)
    {
        rem=n%2;
        n/=2;
        if(rem==1){
            count++;
            if(count>=t)
                t=count;
        }
        else
            count=0;

    }
    return t;

}

int main(){
    int n;
    cin >> n;
    int r=0;
    int s = decimal_binary(n);
    cout<<s;

    return 0;
}

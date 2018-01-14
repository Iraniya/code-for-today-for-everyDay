#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,x,a,b;
    vector<int>v;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int y;
        scanf("%d",&y);
        v.push_back(y);
    }
    scanf("%d",&x);
    scanf("%d %d",&a,&b);

    v.erase(v.begin()+(x-1));
    v.erase(v.begin()+(a-1),v.begin()+(b-1));

    printf("%d\n",v.size());
    for(int i=0;i<v.size();i++){
        printf("%d ",v[i]);
    }



    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}

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


int main(){
    int n;
    int k;
    int count=0;
    cin >> n >> k;
    vector<int> a(n);
    for(int a_i = 0;a_i < n;a_i++){
       cin >> a[a_i];
    }
    for(int a_i = 0;a_i<n;a_i++){
        for(int a_j=a_i+1;a_j<n;a_j++){
            if(((a[a_i]+a[a_j])%k)==0)
                count++;
        }
    }
    cout<<count;
    return 0;
}

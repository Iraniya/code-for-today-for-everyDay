#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

string convertToASCII(string letter,int k)
{
    string s;
    for (int i = 0; i < letter.length(); i++)
    {
        char x = letter.at(i);
        int temp = int(x)-k;
        s.append(char(temp));
        cout<<int(x)<<" "<<temp<<endl;
    }
    return s;
}

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int k;
    cin >> k;
    s= convertToASCII(s,k);
    cout<<s;
    return 0;
}

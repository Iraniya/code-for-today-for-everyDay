/*
     Given two stringd x and y, find the longest common subsequence (LCS) and print its length

        x : ABCBDAB
        y : BDCABC

        "BCAB" is the longest subsequence found in both sequence,
         so the answer is 4
*/

#include <iostream>
#include <stdio.h>

using namespace std;

void lcd(string x,string y){
    int n = x.length();
    int m = y.length();
    int d[n][m];
    for(int i =0;i<=n;i++) d[i][0]=0;
}

int main()
{
    string x, y;
    scanf("%s",x);
    scanf("%s",y);
    lcd(x,y);
    cout << "Hello World!" << endl;
    return 0;
}


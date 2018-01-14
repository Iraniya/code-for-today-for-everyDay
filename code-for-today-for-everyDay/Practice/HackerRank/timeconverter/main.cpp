#include <iostream>
#include<stdio.h>
#include<string>
#include<iomanip>

using namespace std;

int main()
{

    int hh,mm,ss;
    char c;
    scanf("%d:%d:%d%c",&hh,&mm,&ss,&c);

    if(c=='P' && hh!=12){
        hh+=12;}
    if(c=='A'&& hh==12){hh=0;}

    printf("%02d:%02d:%02d",hh,mm,ss);

    return 0;

}


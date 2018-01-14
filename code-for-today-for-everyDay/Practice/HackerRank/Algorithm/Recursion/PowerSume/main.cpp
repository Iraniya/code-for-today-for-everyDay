#include <iostream>
#include <math.h>

using namespace std;


int powerOfsum(int x,int n, int current) {

    if(pow(current,n)<x){
        return powerOfsum(x,n,current+1) + powerOfsum(x-pow(current,n),n,current+1);
    }
        else if (pow(current,n)==x) {
        return 1;
    }else
        return 0;
}

int main(int argc, char *argv[])
{

    int x,n;
    cin>>x>>n;
    cout <<powerOfsum(x,n,1)<< endl;
    return 0;
}


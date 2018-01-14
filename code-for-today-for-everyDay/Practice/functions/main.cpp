#include <iostream>
#define min(a,b)(((a)<(b))?(a):(b))
#define max(a,b)(((a)>(b))?(a):(b))
using namespace std;

//find function for tri tiling
//dn=dn-2+ an-1 + an-1
//function to implement
//set(k,x),
//sum(k)
//map
//int fabbonaci(int f){
//}
//int find(int x){
//    int l[x];
//    if(x!=l[x]) x=l[x];
//    return x;
//}
//void Union(int x, int y){
//    int l[find(x)]=find(y);
//}


// GCD of two number

/*
int gcd(int a, int b){                       //o(log(a+b))
    while(b){int r =a%b;a=b;b=r;}
    return a;
}
*/

// Number of solution using sum of 1,3 and 5,
/*
int sumw135(){
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    int d[n];
    d[0]=d[1]=d[2]=1;
    d[3]=2;
    d[4]=3;
    for(int i=5;i<=n;i++){
        d[i]=d[i-1]+d[i-3]+d[i-4];
    }
    cout<<d[n];

}
*/


//main fuction start here

int main()
{

    return 0;
}

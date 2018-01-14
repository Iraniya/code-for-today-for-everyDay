#include <iostream>

using namespace std;

int main()
{
    int t=0,n=0, i=0,j=0;

    cin>>t;
        for(i=0;i<t;i++)
        {

            cin>> n;
            int ni[n-1];
            int sum[n-1];
            for(int j=0;j<n;j++)
            {
                cin>>ni[j];
                sum[i]=sum[i]+ni[j];


            }

           if(sum[i]!=n&& sum[i]>n){
               cout<<"-1";
            }
           else
               cout<<"workmore";

            }
    return 0;
}


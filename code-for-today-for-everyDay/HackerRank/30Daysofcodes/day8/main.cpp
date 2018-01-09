#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <string>
using namespace std;


int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int numOfEntery;
    cin>>numOfEntery;
    string name;
    long value;
    map<string,long> phoneBook;
    for(int i=0;i<numOfEntery;i++)
    {
        cin>>name;
        cin>>value;
        phoneBook.insert(pair<string,long>(name,value));

    }
    while(cin>>name){
        if(phoneBook.find(name)!= phoneBook.end()){
            cout<<name<<"="<<phoneBook.find(name)->second<<endl;
         }
        else{
            cout<<"Not found"<<endl;
        }
    }

   return 0;
}

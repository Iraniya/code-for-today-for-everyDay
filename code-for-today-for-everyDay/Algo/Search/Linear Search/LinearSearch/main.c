#include <stdio.h>

int main(int argc, char *argv[]){
    int numberOfValues;
    scanf("%s",&numberOfValues);
    int a[numberOfValues];
    for(int i =0 ;i<numberOfValues; i++){
        scanf("%s",a[i]);
    }
    int numberToSearch;
    scanf("%s",numberToSearch);
    int seach = search(a,numberToSearch);
}

// Linearly search x in arr[].  If x is present then return its
// location,  otherwise return -1
int search(int arr[], int n, int x)
{
    int i;
    for (i=0; i<n; i++)
        if (arr[i] == x)
         return i;
    return -1;
}

int binarySearch(int a[], int value){

}


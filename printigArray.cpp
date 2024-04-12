#include <iostream>

using namespace std;

void print(int arr[],int n){
    if(n==0){
        return;
    }
    cout<<arr[0]<<" ";
    print(arr+1,--n);
}

int main(){
    int arr[]={1,2,3,4,5,6};
    int size=sizeof(arr)/sizeof(int);
    print(arr,size-1);
    return 0;
}
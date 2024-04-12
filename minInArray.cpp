#include <iostream>
#include <climits>


using namespace std;

void findMin(int arr[],int index,int&min,int size){
    if(index == size){
        return;
    }   
    if(min > arr[index]) min=arr[index];
    findMin(arr,index+1,min,size);
}

int main(){
    int arr[]={2,-3,5,35,56,788,-2000};
    int size=sizeof(arr)/sizeof(int);
    int min=INT_MAX;
    findMin(arr,0,min,size);
    cout<<"Min Number :"<<min;
    return 0;
}
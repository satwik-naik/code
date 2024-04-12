#include <iostream>
#include <climits>
using namespace std;

int  printMax(int arr[],int size,int i,int maxVal){
    if(i == size){
        return maxVal;
    }
    
    if(maxVal < arr[i]){
        maxVal = arr[i];
    }
   
   return printMax(arr,size,i+1,maxVal); 
}

int main(){
    int arr[]={2,3,5,35,56,788,2000};
    int size=sizeof(arr)/sizeof(int);
    cout<<"Max Number is : "<<printMax(arr,size,0,INT_MIN);
    return 0;
}
#include <iostream>

using namespace std;

int climb_Total_Stais(int n){
    if(n==0||n==1) return 1;

    return climb_Total_Stais(n-2)+climb_Total_Stais(n-1);
}

int main(){
    int n;
    cout<<"Enetr Number of Stairs : ";
    cin>>n;
    cout<<climb_Total_Stais(n)<<"\n";
}
#include <iostream>

using namespace std;

int fibonacci(int n){
    if( n == 1 || n == 0) return 1;
    return  fibonacci(n-2)+fibonacci(n-1);
}

int main(){
    int n;
    cin>>n;
    cout<<"fibonacci of "<<n<<" is: "<<fibonacci(n);
    return 0;
}
#include <iostream>

using namespace std;

void printDigit(int Number){
    if(Number == 0){
        return;
    }
    
    printDigit(Number/10);
    cout<<Number%10<<endl;
}

int main(){
    int Number=548959495;
    printDigit(Number);
    return 0;
}
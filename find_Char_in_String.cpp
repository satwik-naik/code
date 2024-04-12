#include <iostream>
#include <string>

using namespace std;

bool findChar(string name,int n,char key,int index,int &count){
      if(index == n){
         return false;
      }

      if(name[index] == key){
          count++;
      }

      return findChar(name,n,key,index+1,count);
}

int main(){
    string name= "sssssatwik ";
    int n=name.length();
    int count = 0;
    findChar(name,n,'s',0,count);
        cout<<"Character is found "<<count<<"\n";
    
    
    return 0;
}
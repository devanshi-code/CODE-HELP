#include<iostream>
using namespace std;
void setBits(int a , int b){
   int sb= (a|b);
   cout<<"Total no of set bits in a&b"<<sb;
}
int main(){
    int a,b;
    cin>>a>>b;
    setBits(a,b);
}
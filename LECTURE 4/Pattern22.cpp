/* 1 1 1 1
     2 2 2
       3 3
         4 */
#include<iostream>
using namespace std;

int main(){
  int n;
  cin>>n;
  int row=1;
  while(row<=n){
    int space=row-1;
    while(space){
             cout<<" ";
             space=space-1;
    }
    int col=4;
    while(col>=row){
        cout<<row;
        col--;
    }
    cout<<endl;
    row++;
       
  }
  return 0;
}         
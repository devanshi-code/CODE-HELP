#include<iostream>
using namespace std;


int main() {

    int a = 4;
    int b = 6;

    cout<<" a&b " << (a&b) << endl;
    cout<<" a|b " << (a|b) << endl;
    cout<<" ~a " << ~a << endl;
    cout<<" a^b " << (a^b) << endl;

    cout<<(17>>2)<<endl;
    cout<<(14<1)<<endl;

    //pre-increment and post increment
    int i=7;
    cout<<(++i)<<endl;
    cout<<(i++)<<endl;
    cout<<(i--)<<endl;
    cout<<(--i)<<endl;
    return 0;
    //output
   /* a&b 4
 a|b 6
 ~a -5
 a^b 2
4
0
8
8
9
7*/

}
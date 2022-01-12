#include<iostream>
using namespace std;

int main()
{
    int n,evensum=0;
    cin>>n;
    int i=0;
    while (i<=n)
    {
        if(i%2==0)
        {
            evensum+=i;
            
        }
        i+=1;
    }
    cout<<evensum;
    return 0;
    
}
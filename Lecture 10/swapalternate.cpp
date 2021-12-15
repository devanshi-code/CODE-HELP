#include<iostream>
using namespace std;
void printArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void swapAlterate(int arr[],int size){
    for(int i=0;i<size;i=i+2)
    {
        if(i+1<size)
        {
            swap(arr[i],arr[i+1]);
        }
    }
}
int main()
{
    int even[]={2,4,6,7,10,12};
    int odd[]={1,3,2,5,7};
    swapAlterate(even,6);
    printArray(even,6);
    swapAlterate(odd,5);
    printArray(odd,5);
}
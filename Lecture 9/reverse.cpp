#include<iostream>
using namespace std;
void reverseArray(int arr[],int size)
{
    int start=0;
    int end=n-1;
    while(start<=end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }

}
void printArray(int arr[],int size)
{
    for(int i=0;i<size;i++)
     cout<<arr[i]<<" ";
}
int main()
{
  int size;
  cin>>size;
  int arr[100];
  for(int i=0;i<size;i++)
    cin>>arr[i];
  reverseArray(arr,size);
  printArray(arr,size);  
}
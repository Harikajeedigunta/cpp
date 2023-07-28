#include<iostream>
using namespace std;
int findElement(int arr[],int n,int key)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(arr[i]==key)
        return i;
    }
    return -1;
        
}
int main()
{
    int arr[]={12,34,10,8,36,40};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key=34;
    int position=findElement(arr,n,key);
    if(position==-1)
    cout<<"element not found";
    else
    cout<<position+1;
    return 0;
}

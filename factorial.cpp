#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int factorial=1;
    if(n<0)
    {
        cout<<"factorial doesn't exist";
    }
    if(n==0)
    {
        cout<<"factorial is 1";
    }
    for(int i=1;i<n+1;i++)
    {
        factorial=factorial*i;
    }
    cout<<factorial;
}

#include<iostream>
using namespace std;

int main()
{
    int n;
    int count=0;
    cout<<"enter any number:";
    cin>>n;
    while(n!=0)
    {
        count++;
        n=n/10;

    }
    cout<<"number of digits:"<<count;
}
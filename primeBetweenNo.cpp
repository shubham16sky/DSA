#include<iostream>

using namespace std;

bool isPrime(int num)
{
    for(int i=2;i<num;i++)
    {
        if(num%i==0)
        {
            return false;
        }
    }

    return true;
}


int main()
{
    int a;
    cout<<"Enter the 1st number : "<<endl;
    cin>>a;
    int b;
    cout<<"Enter the 2nd number : "<<endl;
    cin>>b;

    cout<<"Prime numbers are : "<<endl;

    for(int i=a;i<=b;i++)
    {
        if(isPrime(i))
        {
            cout<<i<<endl;
        }
    }


    

     return 0;
}
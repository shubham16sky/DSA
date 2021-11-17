#include<iostream>

using namespace std;

int fact(int number)
{
    int factorial = 1;
    for(int i=2;i<=number;i++)
    {
        factorial = factorial*i;
    }

    return factorial;
}


int main()
{
    int n,r,diff;

    cin>>n;
    cin>>r;
    diff = n-r;

    

    int factN=fact(n);
    int factR = fact(r);
    int factDiff = fact(diff);

    int answer = factN / (factDiff * factR);

    cout<<answer<<endl;

    return 0;
}
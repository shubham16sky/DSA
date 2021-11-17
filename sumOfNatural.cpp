#include<iostream>
using namespace std;

int sumOfNAtural(int n)
{
    int result = n*(n+1)/2;

    return result;
}

int main()

{
    int n;

    cout<<"Enter the N : "<<endl;

    cin>>n;

    int answer = sumOfNAtural(n);

    cout<<"Sum of "<<n<<" natural numbers is : "<<answer<<endl;
    return 0;
}
#include<iostream>

using namespace std;
int fact(int n)
{
     int factorial=1;

    for(int i=2;i<=n;i++)\
    {
        factorial = factorial * i;
    }

    return factorial;
}

int main()

{
    int number;

    cout<<"Enter the number : "<<endl;

    cin>>number;

    int answer = fact(number);

    cout<<answer<<endl;

}
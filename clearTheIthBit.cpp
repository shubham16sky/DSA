#include<iostream>

using namespace std;

int clear(int n,int i)
{
    int temp = 1<<i;
    int mask = ~(temp);

    int newNumber = (n & mask);
    return newNumber;
}


int main()

{
    int n;
    cin>>n;
    int i;
    cin>>i;

    int result = clear(n,i);

    cout<<"No. obtained after clearing the "<<i<<"th bit of "<<n<<" is : "<<result<<endl;
    return 0;
}
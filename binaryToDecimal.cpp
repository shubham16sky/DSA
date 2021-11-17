#include<iostream>

using namespace std;

int binaryToDecimal(int n )
{
    int answer = 0;
    int x=1;
    while(n>0)
    {
        int y = n%10;
        answer += x*y;
        x = x*2;
        n = n/10;


    }

    return answer;
}


int main()
{
    int n;
    cout<<"Enter the binary number to be converted : "<<endl;
    cin>>n;

    cout<<"After conversion answer is : "<<endl;

    cout<<binaryToDecimal(n)<<endl;

    return 0;
}
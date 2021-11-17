#include<iostream>

#include<math.h>

using namespace std;

int main()

{
    int n;
    cin>>n;
    int sum = 0;
    int originalN = n;

    while(n>0)

    {
        int lastdigit = n%10;

        sum = sum + (lastdigit*lastdigit*lastdigit);

        n = n/10;


    }

    if(originalN==sum)
    {
        cout<<"No. is an Armstrong number."<<endl;
    }

    else
    {
        cout<<"No. is not an Armstrong number."<<endl;
    }
    return 0;
}
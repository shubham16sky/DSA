#include<iostream>

using namespace std;

bool pythagorianCheck(int x,int y,int z)
{
    int a,b,c;
    a=max(x,max(y,z));

    if(a==x)
    {
        b=y;
        c=z;
    }
    else if (a==y)
    {
        b=x;
        c=z;
    }
    else
    {
      b=x;
      c=y;
    }

    if(a*a==b*b+c*c)
    {
        return true;
    }
    else
    {
        return false;
    }

}

int main()

{
    int a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;

    if(pythagorianCheck(a,b,c))
    {
        cout<<"Given set of number is a pythagorian triplet."<<endl;
    }
    else
    {
        cout<<"Given set of number is not pythagorian triplet."<<endl;
    }

    return 0;
}
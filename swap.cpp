#include<iostream>

using namespace std;


//function to swap two numbers without using 3rd variable , using XOR operation 

// int swap(int a,int b)
// {
//   a = a^b;
//   b = a^b;
//   a = a^b;

// cout<<"After swapping\n"<<"Numbers are :\n"<<"A = : "<<a<<"And B = : "<<b;
// return a,b;

// }


//function to swap 2 nnumbers without using 3rd variable , using * and / operator 


// int swap1(int a , int b )

// {
//     a = a/b;
//     b = a*b;
//     a = a*b;
//     cout<<"After swapping\n"<<"Numbers are :\n"<<"A = : "<<a<<"And B = : "<<b;

//     return a,b;


// }



//function to swap 2 numbers without using 3rd variable , using + and - operator 


int swap2(int a, int b)
{   
   a = a+b;
   b = a-b;
   a = a-b;

   cout<<"After swapping\n"<<"Numbers are :\n"<<"A =  "<<a<<" And B =  "<<b;

   return a,b;
}

//Driver code 

int main()

{   int a , b;

    cout<<"Enter the first number A : "<<endl;

    cin>>a;

    cout<<"Enter the second number B : "<<endl;

    cin>>b;


    swap2(a,b);
}



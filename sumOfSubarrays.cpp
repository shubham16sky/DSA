#include<iostream>

using namespace std;


int main()

{
    int n;
    cin>>n;
    int arr[n];

    for(int i = 0;i<n;i++)
    {
      cin>>arr[i];
    }


    int current = 0;

    for(int i = 0;i<n;i++)
    {
       int current = 0;
       for(int j=i;j<n;j++)
       {
          current = current + arr[j];
          cout<<current<<endl;
       } 
    }

   return 0;
}


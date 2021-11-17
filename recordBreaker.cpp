#include<iostream>

using namespace std;

int main()

{
    int n ;


    cin>>n ;

    int array[n+1];
     array[n]=-1;

     for(int i =0;i<n;i++)
     {
         cin>>array[i];
     }


     if(n==1)
     {
         cout<<"1"<<endl;
         return 0;
     }


     int maximum = -1;

     int answer = 0;

     for(int i = 0 ;i<n;i++)
     {
         if(array[i]>maximum && array[i]>array[i+1])
         {
             answer ++;
         }

         maximum = max(array[i],maximum+1);
     }


     cout<<answer<<endl;




}
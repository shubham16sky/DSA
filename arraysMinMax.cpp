//Program to find maximum and minimum element of an array


#include<iostream>

#include<climits>

using namespace std;

int main()
{
    int n;

    cout<<"Enter the size of the array : "<<endl;
    cin>>n;

    int array[n];

    cout<<"Enter the array elements : "<<endl;

    for(int i = 0; i<n; i++)
    {
       cin>>array[i];
    }

   int  maxNo = INT_MIN;
   int  minNo = INT_MAX;

   //Without using inbuilt function 
//    for(int i = 0 ; i <n ; i++)
//    {
//        if(array[i]>maxNo)
//        {  
//         maxNo = array[i];

//        }

//        if(array[i]<minNo)
//        {
//            minNo=array[i];
//        }
//    }


   //This can also be done by using inbuilt functions like
   for(int i = 0;i<n;i++)
   {
       maxNo = max(maxNo,array[i]);
       minNo = min(minNo,array[i]);

   }

   cout<<maxNo<<" "<<minNo<<endl;


}
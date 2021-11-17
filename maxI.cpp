#include<iostream>

#include<climits>

using namespace std;

int main () 
{   
    int maximum  = INT_MIN;
    int n;
    cout<<"Enter the number of elements in array : "<<endl;
    cin>>n;

    int arr[n];

    cout<<"Enter the array elements : "<<endl;

    for(int i = 0; i < n ; i++)
    {
        cin>>arr[i];
    }
    
     
     
    

    for(int i = 0; i<n;i++) 
    {
        maximum = max(maximum,arr[i]);
        cout<<maximum<<endl;
    }

    
}
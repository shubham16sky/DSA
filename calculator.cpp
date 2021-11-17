#include<iostream>

using namespace std;


int main()

{   int a,b,res,choice;

    cout<<"Welcome"<<endl;

    cout<<"Enter the first number : ";
    cin>>a;

    cout<<"Enter the second number : ";
    cin>>b;



    cout<<"Choose from following options : "<<endl<<"Enter 1 to add \n Enter 2 to subtract \n Enter 3 to multiply \n Enter 4 to divide \n"<<endl;
    cin>>choice;

        switch(choice)
        {
            case 1:
            res=a+b;
            cout<<"Sum of the given numbers is : "<<res;
            break;

            case 2:
            res=a-b;
            cout<<"Difference of the given number is : "<<res;
            break;


            case 3:
            res=a*b;
            cout<<"product of given numbers is:  "<<res;
            break;


            case 4:
            res=a/b;

            cout<<"Quatient of the given numbers is : "<<res;
            break;

            default:
            cout<<"You have selected wrong choice ! Please try again ! ";
        
        }
    
    

}


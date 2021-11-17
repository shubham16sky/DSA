//basic string challenges 


//converting the string to lower or upper case 

//for this it is required  to get the difference between ASCII values of 'a' and 'A'. 

 /*

 cout<<'a' - 'A';


 output = 32;

 means a is 32 places ahead of A in ASCII 

 */


//so now will see how to convert lower to upper case 
/*
string str = "pranit";

for(int i = 0; i < str.lenght(); i++)
{
    if(str[i] >= 'a' && str[i] <= 'z') //here we are checking wheather character is present between 'a' and 'z' or not
                                       //means we are checking wheather character is in lower or upper case  
    str[i] -=32;
}

cout<<str<<endl;

*/

// conversion of upper to lower case 

/*
to do so just we have to change the condition of for loop 

for(int i =0; i<str.lenght();i++)
{
    if(str[i]>='A' && str[i]>='Z')
    str[i]+=32;

}

cout<<str<<endl;

*/


// In built function to convert to lower case or upper case 

/*

In c++ transform() is used to convert string to lower or upper case

syntax of transform function :

string str = "pranit";

transform(str.begin(),  str,end(),  str.begin()::toupper);

 //here 2nd str.begin() can be replaced by the
 index of the character from which we have to convert it to upper case 


//Similarly by just changing toupper to tolower we can convert a string to lowercase 

*/

// form the biggest number from the given numeric string

/*

To do so we just have to sort the given string in decreasing order 

so to do so we will use the sort() function and for that it is required to include the <algoritm> header file 

example:

string str = "45896723";

str.sort(str.begin()  ,str.end() ,greater<int>());

cout<<str<<endl;


*/

//Find the character in a given string which is occuring maximum time and also find the frequency of that 

/*

Note : Typically ASCII characters are 256 but we can also take them as 26 in most of the cases as we normally use
     alphabets in a string

     let's see the code : 

     #include<iostream>
#include<bits/stdc++.h>
#include<string>

#define ASCII 256

using namespace std;

char getMaxOccuringChar(char*  str)

{
    int count[ASCII] = {0};
    
    int len = strlen(str);
    
    int max = 0;
    
    char result;
    
    for(int i=0;i<len;i++)
    {
        count[str[i]]++;
        if(max<count[str[i]])
        {
            max = count[str[i]];
            result = str[i];
        }
    }
    cout<<max<<endl;  
    return result;
}



int main()

{
    char str[] = "abxhhghhgtgjiyg";
    
    
    
    cout<<getMaxOccuringChar(str);
    
    return 0;
}


*/







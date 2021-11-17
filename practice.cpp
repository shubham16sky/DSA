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
// Strings are defined as array of characters
// diff. between array and string is it ends with a special charcter  \o
// in c and c++ string is an 1-D array and array of string is a 2-D array


//string declaration 

/*
  way 1:
 string variable_name;

 way 2 :

 string variable_name(n   , any letter)

 here n = no. of characters in desired string and any letter means any specific character of which you want to create string 


 exampple : 

 string str(5,n);

 output>> nnnnn


 way 3:

 string str = "Pranit";


______________________________________________________________________________

*/

/*

String operation : 

first of all it is required to include <string> header file .

_________________________________________________________________

//Taking whole line or paragraph as input : 

to take whole ;ine with spaces as input we use getline(cin  , variable_name)  function 

example : 

string str = "Hi pranit how are you ? ";
getline(cin , str);
_________________________________________________________
important string functions !!! : 

1)append(): It is used to concatenate the two strings into a single
example : s1.append(s2);

it'll conactenate the strings s1 and s2

concatenation of two strings can be done with another one method too 

we can use + to concatenate the two strings

example : 

cout<<s1+s2;
________________________________________________________
2)Chatracter accessing : 

in string index starts from 0 and characters can be accessed by the same way as we access the elemnts of an array 

example : 

string s1 = "Pranit";
cout<<s1[2];

output : a
_______________________________________________________
3)clear() :

clear function is used to clear the string 

example : 

string str = "Pranit";

s1.clear();

_____________________________________________________________
4)compare() : 

Compare function is used to compare the two strings one

example : 

string s1 = "abcdef";
string s2 = "abcdef";

s1.compare(s2);

output: 0

note: if output is 0 then it means that string is smae or equal

_____________________________________________________________________

5)empty() : 

empty() function is used to check wheather string is empty or not 
__________________________________________________________________
6)erase() : 
it is used to erae a part of the given string too

erase(x   ,    y);

x == starting index of the part which is to be erased 
y == number of characters to be erased is


example : 


string str = "SHUBHAM";

str.erase(1,2);

output : SBHAM

_______________________________________________________________________


7)find() : 

it is used to find the starting index of given substring in that string 

example :

string str = "SHUBHAM";

str.find("BH");

out[put : 3 ("BH" strats at 3rd position )


___________________________________________________________________________

8) insert() : It is used to insert the given string at given position 


example : 

string s1 = "nincompoop";

s1.insert(2,"lol");  // here "lol" string will be placed from 2nd index 


cout<<s1<<endl;

output: ninlolcompoop 


________________________________________________________________________


9) length() or size() : It is used to calculate the size or length of the string

example: 

string str = "Shubham";

str.length();

output : 6

_______________________________________________________________________________

10) substring() : It is used to slice out the substring from the guven string 

example : string str = "nincompoop";

str.substring(6,4);  // here 6 is the starting index of required substring and 4 is the characters required 

output : poop


__________________________________________________________________________________


11) stoi() : It is used to convert string to int 

example : 

string str = "222";

int a = stoi(str);

cout<<a;

output : 222(ing value )


Note : to_string() function is used to convert int to string and


_______________________________________________________________________________________


12) sort() : It is used to sort the string.

to use this function it is required to include the <algorithm> header file.


note : begin() function is used to find the starting index of the string
 and end() function is used to find the last index of the string.

 example : 

 string s1 = "bca";

 s1.sort(begin(), end());

 cout<<s1;

 output : abc

 ___________________________________________________________________________

*/

/* ----------------------------------------------------------------
   string traversal : 



   for loop and length() function is used top traverse through the characters of the string and

   example : 

   string str = "shubham";

   for(int i = 0;i<str.length() ; i++)
    {
     cout<<str[i]<<endl;
   }


   output : 
   s
   h
   b
   h
   u
   m









   ©Pranit Kumar







*/


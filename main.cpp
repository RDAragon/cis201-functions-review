/*
NAME: main.cpp
AUTHOR: Roger Aragon
EMAIL: aragonr87056@student.vvc.edu
DATE: 16 Oct 2018
DESCRIPTION: Midterm review
*/


#include<iostream>
#include<string>

using namespace std;

int count = 0; //initializes the count, sets it to 0
char c = 'a';

bool is_valid (string s) //the initial function, scans the string
{
    for (int i = 0; i < s.length(); i++) //as long as the initial value "i" is less than the number of characters in the string, 
                                         //it will continue to look until it reaches the end.
    {
        if (s.at(i)  == 'a' || s.at(i) == 'A') //looks for all "A"'s in the string and counts them
            count++;
     
    }
return count;
}

int main()
{
    string s = "At another time this would be absolutely hillarious, except that the result would eventually make national headlines.";
                                                                                                           //The string to be counted
    cout << endl << s << endl; //prints the string so the viewer can see the text to be counted

    if (is_valid(s))          //calls the function
    {
    cout << endl  << "There are " << count << " letter A's in this text "<< endl; //prints the result of the count
    }
    cout << endl;
    return 0;
}

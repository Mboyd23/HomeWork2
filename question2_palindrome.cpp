/*2.	2.	Write a program that find if a given string is a Palindrome 
or not. A  palindrome is a word, number, phrase, or other sequence of 
characters which reads the same backward as forward. For example, the 
given words are radar, level, rotor, kayak palindromes. Your program 
will return, for example “Yes, the radar is a palindrome” or “No, 
the word house is not a palindrome”. (10 pts) */

#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(string text){
    for(int i = 0; i < text.length()/2; i++)
        if(text[i] != text[text.length() - i - 1])
            return false;

        return true;
}

int main()
{
    string given;

    cin >> given;
 
    if (isPalindrome(given))
        cout << "Yes, " << given << " is a palindrome" << endl;
        else
        cout << "No, " << given << " is not a palindrome" << endl;";
 
    return 0;
}

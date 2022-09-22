/*1.	1.	Write a program that reverse the given words in a string 
array. Your program must return a new string array with the reverse 
words and print the new string. For example, if one the word in your 
array is car, then your new array will contain the word rac. (10 pts) */

#include <iostream>
#include <string>

using namespace std;

void reverseString(string words[], int a, int b){
    while(a < b){
        a = 0;
        b = words.size() - 1;
        int temp = words[a];
        words[a++] = words[b];
        words[b--] = temp;
    }
}

int main()
{
 // use the following array of string for your program.
 string words[6] = {"object","oriented","programming","sciences","dedication","commitment"};

    int soa = sizeof(words) / sizeof(words[0]);

    reverseString(string words[], int a, int b);

    cout << "Reversed String Array: " << endl;

    for(int i=0; i < soa; i++)
        cout << words[i] << endl;
}

/*3.3.	Write a program that finds the first non-repeated character 
in the given String, for example, if the given String is "aggregate" 
then the first non-repeated character is "r". Your program will return 
“first non-repeated character is "r". (10 pts)*/

#include <iostream>
#include <string>

using namespace std;

int main(){
    string given;

    cin >> given;
    
    int count[256] = {0};

    while(*p)
        ++count[*p++];

    p = given;

    while(*p){
        if(1 == count[*p])
            cout << "The first non-repeated character is " << *p << endl;

    p++;
    }  

    return 0; 
}

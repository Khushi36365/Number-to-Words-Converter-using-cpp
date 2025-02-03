// Project: Number to Words Converter

/*

Python Program that converts a given number into its word representation.

Each digit of the number is converted into its corresponding word. If the input contains characters that are not digits (0-9), it will replace with an exclamation mark (!).

Example:

Input: 1234
Output: One Two Three Four

Input: 98a7
Output: Nine Eight ! Seven

*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    
    string phone;
    cin>>phone;
    
    string output = "";
    
    for(int i=0; i<phone.length(); i++){
        char ch = phone[i];
        
        if (ch == '1') output += "One ";
        else if (ch == '2') output += "Two ";
        else if (ch == '3') output += "Three ";
        else if (ch == '4') output += "Four ";
        else if (ch == '5') output += "Five ";
        else if (ch == '6') output += "Six ";
        else if (ch == '7') output += "Seven ";
        else if (ch == '8') output += "Eight ";
        else if (ch == '9') output += "Nine ";
        else if (ch == '0') output += "Zero ";
        else output += "! ";
    }
    cout << output << endl;
    return 0;
}



/*

Thank you for using this program!
Feel free to reach out for collaboration or feedback.
LinkedIn: https://www.linkedin.com/in/khushi-jhamb/
Email: 39khushi@gmail.com

*/
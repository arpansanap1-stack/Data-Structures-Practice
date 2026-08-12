#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

bool isPalindrome(string str){
    string cleaned = "";
    for(char c : str){
        if(isalnum(c)){ 
            cleaned += tolower(c); 
        }
    }
    string Rev = cleaned;
    reverse(Rev.begin(), Rev.end());
    return cleaned == Rev;
}

int main(){
    string str;
    cout << "Enter a string: ";
    cin >> str;

    if(isPalindrome(str)){
        cout << str << " is a palindrome." << endl;
    } else {
        cout << str << " is not a palindrome." << endl;
    }

    return 0;
}
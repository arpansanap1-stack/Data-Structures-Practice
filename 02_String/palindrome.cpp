#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

bool isPalindrome(string str){
    string Rev = str;
    reverse(Rev.begin(), Rev.end());
    return str == Rev;
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
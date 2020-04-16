//
// Created by Cochr on 4/16/2020.
//
#include<iostream>
#include<string>
using namespace std;

int main(){
    string str = "this is a string";
    string str2 = str;

    cout << str << endl;
    cout << str2 << endl;

    for (int i = 0; i < str.length(); i++){
        cout << str[i] << " ";
        cout << endl;
    }

    for(int i = 0; i < str.length(); i++){
        cout << &str[i] << endl;
        cout << endl;
    }

    return 0;
}

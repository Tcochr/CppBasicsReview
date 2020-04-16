//
// Created by Cochr on 4/16/2020.
//
#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main(){
    string str = "This is a string";
    const char *s = &str[0];
    const char *t = "this is another string";
    char u[] = "alternate string";
    char v[] = "the broken string";

    cout << str.length() << endl;
    cout << strlen(s) << endl;
    cout << sizeof(s) / sizeof(s[0]) << endl;

    int cn = strcmp(s,t);
    cout << cn << endl;

    if (cn < 0) //then the first string comes first
        cout << s;
    else
        cout << u;
    cout << " comes first" << endl;

    //A string tokenizer
    char *token = strtok(v," ");
    while(token != NULL){
        cout << token << endl;
        token = strtok(NULL," ");
    }

    char output[15];
    strncat (output,s,4);//take 4 chars from the beginning of s -> output
    strncat (output,t,5);//take 5 chars from beginning of t -> output
    strncat (output,u,6);//take 6 chars from beginning of u -> output
    cout << output << endl;
    return 0;
}
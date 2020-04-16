//
// Created by Cochr on 4/16/2020.
//
#include <iostream>
using namespace std;

void a (int x, int y);

void a (int x, int y);
void b (int x, int &y);
void c (int &x, int &y);

int main(){
    int m = 3, n = 5;
    cout << "m: " << m << " n: " << n << endl;
    a(m,n);
    cout << "m: " << m << " n: " << n << endl;
    b(m,n);
    cout << "m: " << m << " n: " << n << endl;
    c(m,n);
    cout << "m: " << m << " n: " << n << endl;
    
    return 0;
}

//These will be passed by value
void a (int x, int y){
    x++;
    y++;
    cout << "x: " << x << " y: " << y << endl;
}

//Y has been passed a copy of memory location
void b (int x, int &y){
    x++;
    y++;
    cout << "x: " << x << " y: " << y << endl;
}

void c (int &x, int &y){
    x++;
    y++;
    cout << "x: " << x << " y: " << y << endl;
}
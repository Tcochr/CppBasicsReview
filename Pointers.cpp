//
// Created by Cochr on 4/16/2020.
//
#include <iostream>
using namespace std;

int main(){
    int a = 1, b = 2, c = 3, d = 4;
    cout << a << " " << b << " " << c << " " << d << endl;
    int  *pa = &a, *pb = &b, *pc = &c, *pd = &d;
    cout << pa << " " << pb << " " << pc << " " << pd << endl;

    //Advancing to the next integer, but since they are 4b segments of memory,
    //incrementing the pointer shifts to the next segment an int can be.
    pa++;
    pb++;
    pc++;
    pd++;

    //Now they are offset by 4 bytes
    cout << pa << " " << pb << " " << pc << " " << pd << endl;

    int da = *pa;
    int db = *pb;
    int dc = *pc;
    int dd = *pd;

    cout << da << " " << db << " " << dc << " " << dd << endl;
    return 0;
}
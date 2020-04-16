//
// Created by Cochr on 4/16/2020.
//
#include<iostream>
using namespace std;
int main(){
 int a[5];
 for(int i = 0; i < 5; i++){
     a[i] = i*i + i;
 }
 for(int i = 0; i < 5; i++){
     cout << a[i] << " ";
     cout << endl;
 }

 int prime[] = {2,3,5,7,11,13,17,19,23,29};
 cout << sizeof(prime) << endl;
 //The zie of the array will be 40b/4b per int
 int size = sizeof(prime)/sizeof(prime[0]);
 cout << size << endl;

 int inc = 0;
 while(inc<size){
     cout << prime[inc] << " " ;
     inc++;
 }
 cout << endl;

 //The memory location of prime and prime[0] are the same
 cout << prime << " " << &prime[0] << endl;
 cout << *prime << " " << prime[0] << endl;


 // Incrementing a pointer to the first element will slide to the next
 // 4b of memory and will therefore traverse the array
 // Either traverse an array using an index variable or by incrementing the pointer
 int *p = prime;
 int i = 0;
 do{
     cout << *p << " " << prime[i] << endl;
     i++;
     p++;
 }while(i < size);

 //s will continue to point to the same address as the corresponding array
 int someNums[] = {0,1,2,3,4,5,6,7,8,9,10};
 int *s = someNums;
 i = 0;
 do{
     cout << *s << " " << someNums[i] << endl;
     cout << s << " " << &someNums[i] << endl;
     i++;
     s++;
 }while(i < sizeof(someNums)/sizeof(someNums[0]));

 return 0;
}
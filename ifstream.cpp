//
// Created by Cochr on 4/16/2020.
//

#include<iostream>
#include <string>
#include <fstream>
using namespace std;
int main(){
    string filename = "..\\letters.txt";
    ifstream input;
    input.open(filename);
    cout << input.is_open() << endl;
    string data, longWord;

    //start longestCount at -1 since count and countTotal start at zero
    int count = 0, countTotal = 0, longestCount = -1;
    //The extraction operator returns true as long as it retrieves data
        while (input >> data) {
            cout << data << endl;
            count++;
            int wordlength = data.length();
            countTotal += wordlength;
            if (wordlength > longestCount) {
                longestCount = wordlength;
                longWord = data;
            }
        }
    cout << "avg: " << (double)(countTotal)/(count) << endl;
    cout << "longest: " << longWord << endl;
    cout << "count: " << count << endl;
    input.close();

    return 0;
}
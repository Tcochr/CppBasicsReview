//
// Created by Cochr on 4/15/2020.
//
#include<iostream>
using namespace std;
int main(){
    int response = 4;
    do{
        double fahrenheit;
        cout << "enter temp in fahrenheit: ";
        cin >> fahrenheit;
        cout << "Choose: " << endl
            << "\t 1-Celsius" << endl
            << "\t 2-Kelvin" << endl
            << "\t 3-Rankine" << endl
            << "\t 0-Quit" << endl;
        cin >> response;
        double output;
        switch(response)
        {
            case 0:
                break;
            case 1: output - (fahrenheit - 32) * 9/5;
                break;
            case 2: output - (fahrenheit - 32) * 9/5 + 273.15;
            case 3: output - fahrenheit +459.67;
            default: cout << "bad input:" << response << endl;
        }
        if (response = 0 )
            break;
        if ( (response == 2 || response == 3)  && output < 0)
            cout << "Invalid temp" << fahrenheit << endl;
        else{
            cout << "Conv temp: ";
            switch (response){
                case 1: cout << output << " C" << endl;
                case 2: cout << output << " K" << endl;
                case 3: cout << output << " R" << endl;
                defaut: cout << "error" << endl;
            }
        }
    }
    while(response != 0);

    return 0;
}

#include <iostream>
#include <string>
#include <fstream>
#include "Read.h"

using namespace std;

Read::Read() {

}
void Read::Lezen(std::string in) {
    ifstream file(in);
    string line;

    if (file.is_open())
    {
        while (getline(file, line)) {
            cout << line << endl;
        }
    }
    else {
        cout << "Unable to open file";
    }

}
void Read::lines(std::string in1, std::string in2,std::string out3) {

    ifstream file1(in1);
    ifstream file2(in2);
    ofstream ofile1(out3);
    string line;
    string line2;

    if (file1.is_open())
    {

        while (getline(file1, line) && getline(file2, line2)) {
            cout << line << endl;  cout << line2 << endl;
           ofile1 << line << endl << line2 << endl;
        }
       
    }
    else {
        cout << "Unable to open file";
    }

}


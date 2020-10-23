#include <iostream>
#include <string>
#include <fstream>
#include "Reverse.h"
using namespace std;
Reverse::Reverse() {


}
void Reverse::Omdraaien(std::string in, std::string out) {


    ifstream ifs(in, std::ios::binary);
    if (!ifs) throw runtime_error("Couldn't open input file.");

    ofstream ofs(out, std::ios::binary);
    if (!ofs) throw runtime_error("Couldn't open output file.");

    string s;
    for (char ch; ifs.get(ch);)
        s.push_back(ch);

    reverse(s.begin(), s.end());

    for (char ch : s)
        ofs.put(ch);
}
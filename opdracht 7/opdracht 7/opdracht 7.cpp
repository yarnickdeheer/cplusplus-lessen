
#include <iostream>
#include <string>
#include <fstream>
#include "Read.h"
#include "Reverse.h"
using namespace std;
int main()
{
    Reverse* rev = new Reverse;
    Read* read = new Read;
    rev->Omdraaien("jabberwocky.txt", "writefile.txt");

    read->Lezen("jabberwocky.txt");
    cout << "-------------" << endl;
    cout << "reverse" << endl;
    cout << "-------------" << endl;
    read->Lezen("writefile.txt");


    cout << "-------------" << endl;
    cout << "lijn om lijn" << endl;
    cout << "-------------" << endl;
    read->lines("jabberwocky.txt", "writefile.txt", "writefile2.txt");
  
    return 0;
}

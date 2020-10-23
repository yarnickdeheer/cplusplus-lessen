#include <iostream>
#include "Bieb.h"

void uitleen(Bieb& hh, Boek& boek) {
    std::cout <<  hh.inhoud(boek) << std::endl;
    std::cout << "je hebt het boek " + boek.Name() +" geleend " << std::endl;
    hh.Uitleen(boek);
    std::cout <<  hh.inhoud(boek) << std::endl;
    
}
void retour(Bieb& hh, Boek& boek) {
    std::cout <<  hh.inhoud(boek) << std::endl;
    std::cout << "je hebt het boek " + boek.Name() + " terug gebracht " << std::endl;
    hh.Retour(boek);

    std::cout <<  hh.inhoud(boek) << std::endl;
  
}


void option(Bieb& bieb,Boek& boek) {
    int i;
    std::cout << "welkom in de bieb ! wil je lenen of terugbrengen " << std::endl;
    std::cout << "1: lenen " << std::endl;
    std::cout << "2: terugbrengen " << std::endl;
    std::cin >> i;
    if (i == 1) {
        if (boek.beschikbaar == false) {
            std::cout << "sorry het boek is al uitgeleend " << std::endl;
            option(bieb,boek);
        }
        else {
            uitleen(bieb,boek);
            
            option(bieb,boek);
        }
       
    }
    else if (i == 2) {
        if (boek.beschikbaar == true) {
            std::cout << "sorry je hebt geen boek " << std::endl;
            option(bieb,boek);
        }
        else {
            retour(bieb,boek);
            option(bieb,boek);
        }
    }
    else {
        option(bieb,boek);
    }
}

int main() {
    Boek boek;
    Bieb bieb = Bieb(boek); 
    option(bieb,boek);
    return 0;
}



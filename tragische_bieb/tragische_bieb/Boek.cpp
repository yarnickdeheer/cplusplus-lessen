#include <string>
#include "Bieb.h"
#include "Boek.h"
Boek::Boek() {
    this->beschikbaar = true;
}
std::string Boek::Name() {
    return "pinkeltje";
}


//void Boek::Uitleen() {
//    this->beschikbaar = false;
//}
//void Boek::Retour() {
//    this->beschikbaar = true;
//}
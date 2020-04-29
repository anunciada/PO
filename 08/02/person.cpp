#include <iostream>
#include "person.hpp"

Person::Person(std::string n_name, int n_cc, Date n_date){
    name = n_name;
    cc = n_cc;
    dateBirth = n_date;
}

Person::~Person(){}
Person::Person(){}

void Person::setName(std::string n_name){
    name = n_name;
}

void Person::setCC(int n_cc){
    cc = n_cc;
}

void Person::setDate(Date n_date){
    dateBirth = n_date;
}

std::string Person::getName(){
    return name;
}

int Person::getCC(){
    return cc;
}

Date Person::getDate(){
    return dateBirth;
}

std::istream &operator>> (std::istream &is, Person &n_person){
    std::cout << "Name: ";
    is >> n_person.name;
    std::cout << "Cc: ";
    is >> n_person.cc;
    std::cout << "Birthday: ";
    is >> n_person.dateBirth;

    return is;
}

std::ostream &operator<< (std::ostream &os, const Person &person){
    os  << "Name: " << person.name << std::endl
        << "Cc: " << person.cc << std::endl
        << "Birthday: " << person.dateBirth << std::endl;

    return os;
}
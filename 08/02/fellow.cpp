#include <iostream>
#include "fellow.hpp"

Fellow::Fellow(std::string n_name, int n_cc, Date n_birth, Date n_dateEnroll, std::string n_institution, double n_scholarship) : Student(n_name, n_cc, n_birth, n_dateEnroll, n_institution){
    scholarship = n_scholarship;
}

Fellow::Fellow(std::string n_name, int n_cc, Date n_birth, Date n_dateEnroll, double n_scholarship) : Student(n_name, n_cc, n_birth, n_dateEnroll){
    scholarship = n_scholarship;
}

Fellow::Fellow(std::string n_name, int n_cc, Date n_birth, double n_scholarship) : Student(n_name, n_cc, n_birth){
    scholarship = n_scholarship;
}

Fellow::Fellow(std::string n_name, int n_cc, Date n_birth) : Student(n_name, n_cc, n_birth){
    scholarship = 1000.0;
}

Fellow::~Fellow(){}
Fellow::Fellow(){}

void Fellow::setScholarship(double n_sc){
    scholarship = n_sc;
}

double Fellow::getScholarship(){
    return scholarship;
}

std::istream &operator>> (std::istream &is, Fellow &n_fellow){
    std::cout << "Name: ";
    is >> n_fellow.name;
    std::cout << "Cc: ";
    is >> n_fellow.cc;
    std::cout << "Birthday: ";
    is >> n_fellow.dateBirth;
    std::cout << "Enrollment day: ";
    is >> n_fellow.dateEnrollment;
    std::cout << "Institution: ";
    is >> n_fellow.institution;
    std::cout << "Scholarship: ";
    is >> n_fellow.scholarship;
    
    return is;
}

std::ostream &operator<< (std::ostream &os, const Fellow &fellow){
    os  << "Name: " << fellow.name << std::endl
        << "Cc: " << fellow.cc << std::endl
        << "Birthday: " << fellow.dateBirth << std::endl
        << "Enrollment day: " << fellow.dateEnrollment << std::endl
        << "Institution: " << fellow.institution << std::endl
        << "Scholarship: " << fellow.scholarship << std::endl;
        return os;
}
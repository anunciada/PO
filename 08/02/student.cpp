#include <iostream>
#include "student.hpp"

int Student::lastId = 10000;

Student::Student(std::string n_name, int n_cc, Date n_birth, Date n_dateEnroll, std::string n_institution) : Person(n_name, n_cc, n_birth){
    institution = n_institution;
    dateEnrollment = n_dateEnroll;
    id = lastId;
    lastId++;
}

Student::Student(std::string n_name, int n_cc, Date n_birth, Date n_dateEnroll) : Person(n_name, n_cc, n_birth){
    dateEnrollment = n_dateEnroll;
    id = lastId;
    lastId++;
}

Student::Student(std::string n_name, int n_cc, Date n_birth) : Person(n_name, n_cc, n_birth){
    Date n_dateEnroll = n_birth.currantDate();
    dateEnrollment = n_dateEnroll;
    id = lastId;
    lastId++;
}

Student::~Student(){}
Student::Student(){}

void Student::setInstitution(std::string n_institution){
    institution = n_institution;
}

void Student::setDateEnroll(Date n_date){
    dateEnrollment = n_date;
}

std::string Student::getInstitution(){
    return institution;
}

Date Student::getDateEnroll(){
    return dateEnrollment;
}

int Student::getId(){
    return id;
}

std::istream &operator>> (std::istream &is, Student &n_student){
    std::cout << "Name: ";
    is >> n_student.name;
    std::cout << "Cc: ";
    is >> n_student.cc;
    std::cout << "Birthday: ";
    is >> n_student.dateBirth;
    std::cout << "Enrollment day: ";
    is >> n_student.dateEnrollment;
    std::cout << "Institution: ";
    is >> n_student.institution;

    return is;
}

std::ostream &operator<< (std::ostream &os, const Student &student){
    os  << "Name: " << student.name << std::endl
        << "Cc: " << student.cc << std::endl
        << "Birthday: " << student.dateBirth << std::endl
        << "Enrollment day: " << student.dateEnrollment << std::endl
        << "Institution: " << student.institution << std::endl;
    return os;
}
#include <string>
#include "person.hpp"
#include "date.hpp"

#ifndef STUDENT_HPP_
#define STUDENT_HPP_

class Student : public Person{
        protected :
        unsigned int id;
        Date dateEnrollment;
        std::string institution;

    public :
        static int lastId;

        Student();
        Student(std::string n_name, int n_cc, Date n_birth, Date n_dateEnroll, std::string n_institution);
        Student(std::string n_name, int n_cc, Date n_birth, Date n_dateEnroll);
        Student(std::string n_name, int n_cc, Date n_birth);
        ~Student();

        void setInstitution(std::string n_institution);
        void setDateEnroll(Date n_date);
        std::string getInstitution();
        Date getDateEnroll();
        int getId();

        friend std::ostream &operator<< (std::ostream &os, const Student &student);
        friend std::istream &operator>> (std::istream &is, Student &n_student);
};

#endif
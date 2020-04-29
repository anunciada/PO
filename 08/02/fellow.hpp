#include "student.hpp"

#ifndef FELLOW_HPP_
#define FELOOW_HPP_

class Fellow : public Student{
    private :
        double scholarship;

    public :
        Fellow();
        Fellow(std::string n_name, int n_cc, Date n_birth, Date n_dateEnroll, std::string n_institution, double n_scholarship);
        Fellow(std::string n_name, int n_cc, Date n_birth, Date n_dateEnroll, double n_scholarship);
        Fellow(std::string n_name, int n_cc, Date n_birth, double n_scholarship);
        Fellow(std::string n_name, int n_cc, Date n_birth);
        ~Fellow();

        void setScholarship(double n_sc);
        double getScholarship();
        
        friend std::ostream &operator<< (std::ostream &os, const Fellow &fellow);
        friend std::istream &operator>> (std::istream &is, Fellow &n_fellow);
};

#endif
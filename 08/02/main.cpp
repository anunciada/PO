#include <iostream>
#include <vector>
#include "fellow.hpp"
#include "student.hpp"
#include "person.hpp"
#include "date.hpp"

int main(){                                                         
    std::vector <Student> students;
    students.push_back(Student("Maria", 9855678, Date(18, 7, 1990), Date(1, 9, 2014)));
    students.push_back(Student("Maria", 9855678, Date(18, 7, 1990)));

    std::vector <Fellow> fellows;
    fellows.push_back(Fellow("Maria", 9855678, Date(18, 7, 1990), Date(1, 9, 2014), 1500.5));
    fellows.push_back(Fellow("Maria", 9855678, Date(18, 7, 1990)));

    Student s;
    std::cout << "Info for a new student:" << std::endl;
    std::cin >> s;
    std::cout << std::endl;
    students.push_back(s);

    Fellow f;
    std::cout << "Info for a new fellow:" << std::endl;
    std::cin >> f;
    std::cout << std::endl;
    fellows.push_back(f);

    std::cout << "-------------------------------------" << std::endl << std::endl;

    for(auto x : students)
    std::cout << x << std::endl;
    for(auto x : fellows)
    std::cout << x << std::endl;
}

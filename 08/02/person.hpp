#include <string>
#include "date.hpp"

#ifndef PERSON_HPP_
#define PERSON_HPP_

class Person{
	protected:
		std::string name;
		int cc;
		Date dateBirth;

	public:
		Person();
		Person(std::string n_name, int n_cc, Date n_date);
		~Person();
		void setName(std::string n_name);
		void setCC(int n_cc);
		void setDate(Date n_date);
		std::string getName();
		int getCC();
		Date getDate();
		friend std::ostream &operator<< (std::ostream &os, const Person &person);
		friend std::istream &operator>> (std::istream &is, Person &n_person);
};

#endif
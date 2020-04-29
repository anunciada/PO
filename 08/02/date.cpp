#include <iostream>
#include <ctime>
#include "date.hpp"

Date::Date(int n_day, int n_month, int n_year){
    day = n_day;
    month = n_month;
    year = n_year;
    checkDate();
}

Date::~Date(){}
Date::Date(){}

void Date::checkDate(){
    if(day < 1 || day > 31 || month < 1 || month > 12 || year < 0){
        std::cout << "Introduza uma data válida (DD MM AAAA) : ";
        std::cin >> day >> month >> year;
    }
}

void Date::setDate(int n_day, int n_month, int n_year){
    day = n_day;
    month = n_month;
    year = n_year;
    checkDate();
}

int Date::getDay(){
    return day;
}

int Date::getMounth(){
    return month;
}

int Date::getYear(){
    return year;
}

Date Date::currantDate(){
    time_t now = time(0);
    tm *ltm = localtime(&now);          //Foi usada a função localtime() por praticidade

    int n_day = ltm->tm_mday;
    int n_month = ltm->tm_mon;
    int n_year = ltm->tm_year;

    Date date(n_day, n_month, n_year);
    return date;
}

std::istream &operator>> (std::istream &is, Date &n_date){
    is >> n_date.day >> n_date.month >> n_date.year;
    return is;
}

std::ostream &operator<< (std::ostream &os, const Date &date){
    os << " " << date.day << " " << date.month << " " << date.year << " ";
    return os;
}
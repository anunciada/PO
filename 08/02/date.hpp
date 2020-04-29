#ifndef DATE_HPP_
#define DATE_HPP_

class Date{
    private:
        int day;
        int month;
        int year;

    public:
        Date();
        Date(int n_day, int n_month, int n_year);
        ~Date();

        void checkDate();
        void setDate(int n_day, int n_month, int n_year);
        int getDay();
        int getMounth();
        int getYear();
        Date operator >> (const Date& n_date);

        static Date currantDate();                                 //Somente devolve a data atual, independentemente da informação guardada
        
        friend std::ostream &operator<< (std::ostream &os, const Date &date);
        friend std::istream &operator>> (std::istream &is, Date &n_date);
};

#endif
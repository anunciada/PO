#include <string>

class Time{
    int hour, minute, second;

    public:
        //Constructors 
        Time();                                                 //Constructor that initialize 0:0:0
        Time(int n_hour, int n_minute, int n_second);           //Constructor that initialize given number
        //Methods
        std::string getTime();                                  //Return time as string
        void setTime(Time n_time);                              //Set instance time
        void dispTime();                                        //Print time in terminal
        void addTime(Time n_time);                              //Add time to current one
        void addTime(int n_hour, int n_minute, int n_second);   //Overload of previous one
};
#include <string>

class stocks{
    //protected:
    public:
        std::string Name, Date;
        double OpeningPrice, MaxPrice, MinPrice, ClosingPrice;
        int Volume;

    //public:
        //Constructors
        stocks(std::string all);
        stocks();

        //Methods
        double diff();
};

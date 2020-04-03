#include "stocks.hpp"
#include <string>

//
//class stocks
//

//Constructor

stocks::stocks(std::string all){
    size_t val_end = 0, val_beg;

    val_beg = all.find_first_not_of(',', val_end);
    val_end = all.find_first_of(',', val_beg);
    Name = all.substr(val_beg, val_end - val_beg);

    val_beg = all.find_first_not_of(',', val_end);
    val_end = all.find_first_of(',', val_beg);
    Date = all.substr(val_beg, val_end - val_beg);

    val_beg = all.find_first_not_of(',', val_end);
    val_end = all.find_first_of(',', val_beg);
    OpeningPrice = std::stod(all.substr(val_beg, val_end - val_beg));

    val_beg = all.find_first_not_of(',', val_end);
    val_end = all.find_first_of(',', val_beg);
    MaxPrice = std::stod(all.substr(val_beg, val_end - val_beg));

    val_beg = all.find_first_not_of(',', val_end);
    val_end = all.find_first_of(',', val_beg);
    MinPrice = std::stod(all.substr(val_beg, val_end - val_beg));

    val_beg = all.find_first_not_of(',', val_end);
    val_end = all.find_first_of(',', val_beg);
    ClosingPrice = std::stod(all.substr(val_beg, val_end - val_beg));

    val_beg = all.find_first_not_of(',', val_end);
    val_end = all.find_first_of(',', val_beg);
    Volume = std::stoi(all.substr(val_beg, val_end - val_beg));
}

stocks::stocks(){
}

//Methods

double stocks::diff(){
    return ClosingPrice - OpeningPrice;
}

#include "data.hpp"
#include "identifier.hpp"
#include "ohlcv.hpp"
#include<iostream>

using namespace std;

Data::Data(OHLCV& datax, identifier& idx) {
    timedata = datax;
    identity = idx;
};

float Data::get_ohlcv_ltp() {
    // return the last traded price
    float value = timedata.close.at(timedata.close.size() - 1);
    return value;
};

#ifndef DATA_H 
#define DATA_H 

#include<iostream>
#include "ohlcv.hpp"
#include "identifier.hpp"

class Data
{
    public:
        Data(OHLCV& timeseries, identifier& identity); // ideal constructor.
        float get_ohlcv_ltp();
    private:
        OHLCV timedata;
        identifier identity;
};

#endif
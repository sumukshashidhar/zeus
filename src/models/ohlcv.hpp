#ifndef OHLCV_H 
#define OHLCV_H 

#include<iostream>
#include<vector>

struct OHLCV 
{
    std::vector<float> open;
    std::vector<float> high;
    std::vector<float> low;
    std::vector<float> close;
    std::vector<int> volume;
};

#endif
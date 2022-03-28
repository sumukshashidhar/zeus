#include<iostream>
#include<vector>

#include "identifier.hpp"
#include "ohlcv.hpp"
#include "data.hpp"

using namespace std;

int main() {
    identifier idx;
    idx.exchange = "NYSE";
    idx.ticker = "AAPL";

    OHLCV oh;
    vector<float> tester;
    tester.push_back(10.55);
    vector<int> volx;
    volx.push_back(123);
    oh.close = tester;
    oh.high = tester;
    oh.open = tester;
    oh.low = tester;
    oh.volume = volx;

    Data d(oh, idx);
    cout << d.get_ohlcv_ltp() << endl;
}
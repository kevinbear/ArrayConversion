#pragma once
#ifndef __INTERGRAL_H__
#define __INTERGRAL_H__
#include "function.h"
class Integral{
public: 
    Integral();
    Integral(Function fun, double sub_interval, double low, double up);
    Integral(Function fun, double sub_interval, double range);
    // Mutator
    void setSubInterval(double n);
    void setSubInterval(int n);
    void setUpperBound(double up);
    void setLowerBound(double lower);
    void setFunction(Function fun);
    // Acessor
    void getSum();
    void getSubinterval();
    void getFunction();
private:
    // partition
    double _sub_interval; //samller is better
    double _upper_bound;
    double _lower_bound;
    double _range;
    // function
    Function _fun;
    // result
    double _sum{0.0};
};
#endif
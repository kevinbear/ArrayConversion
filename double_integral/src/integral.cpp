#include <iostream>
#include "function.h"
#include "integral.h"

Integral::Integral(): _upper_bound(100.0), _lower_bound(0.0), _range(100.0){};

Integral::Integral(Function fun, double sub_interval, double low, double up): _fun(fun), _sub_interval(sub_interval), _upper_bound(up), _lower_bound(low){};

Integral::Integral(Function fun, double sub_interval, double range): _fun(fun), _sub_interval(sub_interval), _range(range){};

// Mutator
void Integral::setSubInterval(double n){
    _sub_interval = n;
};
void Integral::setSubInterval(int n){
    _sub_interval = static_cast<double>(n);
};
void Integral::setUpperBound(double up){
    _upper_bound = up;
};
void Integral::setLowerBound(double lower){
    _lower_bound = lower;
};
void Integral::setFunction(Function fun){
    _fun = fun;
};

// Acessor
void Integral::getSum(){
    // std::cout << "Definite Integral: " <<  << std::endl; 
};
void Integral::getSubinterval(){
    std::cout << "Sub Interval: " << _sub_interval << std::endl;
};
void Integral::getFunction(){
    _fun.getInfo();
};
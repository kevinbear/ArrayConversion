#include <iostream>
#include <cmath>
#include "function.h"
#include "integral.h"
#include "exprtk.hpp"

template<typename T>
void exprSetUp(T a, T b, T n){
    typedef exprtk::symbol_table<T> symbol_table_t;
    typedef exprtk::expression<T>   expression_t;
    typedef exprtk::parser<T>       parser_t;
    T sum(0.0);
    T delta = (b-a)/n;
    T x = T(0);
    const std::string expr_string = "sin(x)";
    
    symbol_table_t symbol_table;
    symbol_table.add_variable("x", x);
    symbol_table.add_constants();

    expression_t expression;
    expression.register_symbol_table(symbol_table);

    parser_t parser;
    parser.compile(expr_string,expression);

    for(x = a; x <= b; x += delta){
        sum += delta*expression.value();
        std::cout << "height(x): " << expression.value() << " x: " << " rectangle area: " << delta*expression.value() << x << std::endl;
        std::cout << "sum: " << sum << std::endl;
    }
    std::cout << "The sum of " << expr_string << " between [" << a << ", " << b << "]" << ": " << sum; 
}

// template <typename T>
// void polynomial()
// {
//    typedef exprtk::symbol_table<T> symbol_table_t;
//    typedef exprtk::expression<T>   expression_t;
//    typedef exprtk::parser<T>       parser_t;

//    const std::string expression_string = "25x^5 - 35x^4 - 15x^3 + 40x^2 - 15x + 1"; // 1. set up the function expression
//     // interval (T can be any data type; here is floating point)
//    T r0 = T(0); // a = 0
//    T r1 = T(1); // b = 1
//    T  x = T(0); // variable
//     // set up variable and constant
//    symbol_table_t symbol_table;
//    symbol_table.add_variable("x",x);

//    expression_t expression;
//    expression.register_symbol_table(symbol_table);

//    parser_t parser;
//    parser.compile(expression_string,expression);

//    const T delta = T(1 / 10.0); // change of x 

//    for (x = r0; x <= r1; x += delta)
//    {
//       printf("%19.15f\t%19.15f\n",x,expression.value());
//    }
// }
int main(int argc, char* argv[]){
    Function Sine;
    Sine.setForm("sin(2πx+10)");
    Integral DfInt(Sine, 100.0, 0, 2*M_PI);
    DfInt.getFunction();
    DfInt.getSubinterval();
    std::cout << "argv[0]: " << argv[0] << " argv[1]: " << argv[1] << std::endl;
    double a = atof(argv[1]);
    double b = std::stof(std::string(argv[2]));
    // double b = atof(argv[2]);
    // double n = atof(argv[3]);
    double n = std::stof(std::string(argv[3]));
    std::cout << "a: " << a << " b: " << b << std::endl;
    exprSetUp<double>(a, b, n);
    return 0;
}
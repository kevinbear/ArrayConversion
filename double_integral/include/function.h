#pragma oonce
#ifndef __FUNCTION_H__
#define __FUNCTION_H__
#include <string>
enum class FunctionType {
    Constant, 
    Rational, 
    Polynomial,
    Exponential, 
    EulerNumber, 
    NaturalLog, 
    Trigonometric,
    Sine, 
    Cosine, 
    Tangent, 
    Cotangent, 
    Secant, 
    Cosecant
};
class Function{
public:
    Function();
    Function(FunctionType type, std::string form);
    void setType(FunctionType type);
    void setForm(std::string form);
    void getInfo();
private:
    FunctionType _type;
    std::string _form;
};
#endif
// Note: the Declare and Definition are different
// For example, 
// void setType(FunctionType type); <- declaration
// void setType(FunctionType type) {}; <- definition
// If we are careless put {} following the declaration, and define or implement in the source file; C++ compiler will show the error message.
//  error: redefinition of ‘void setType(FunctionType type)’
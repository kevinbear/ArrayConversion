#include <iostream>
#include <cmath>
#include "function.h"
Function::Function(): _type(FunctionType::Constant), _form("C"){};
Function::Function(FunctionType type, std::string form): _type(type), _form(form){};
void Function::setType(FunctionType type){
    _type = type;
};
void Function::setForm(std::string form){
    _form = form; 
};
void Function::getInfo(){
    switch (_type) {
        case FunctionType::Constant: 
            std::cout << "Functin Type: Constant Function" << std::endl; 
            std::cout << "Function Form: " << _form << std::endl;
            break;
        case FunctionType::Rational:
            std::cout << "Functin Type: Constant Rational" << std::endl; 
            std::cout << "Function Form: " << _form << std::endl;
            break;
        case FunctionType::Polynomial:
            std::cout << "Functin Type: Constant Polynomial" << std::endl; 
            std::cout << "Function Form: " << _form << std::endl;
            break;
        case FunctionType::Exponential:
            std::cout << "Functin Type: Constant Exponential" << std::endl; 
            std::cout << "Function Form: " << _form << std::endl;
            break;
        case FunctionType::EulerNumber:
            std::cout << "Functin Type: Constant EulerNumber" << std::endl; 
            std::cout << "Function Form: " << _form << std::endl;
            break;
        case FunctionType::NaturalLog:
            std::cout << "Functin Type: Constant NaturalLog" << std::endl; 
            std::cout << "Function Form: " << _form << std::endl;
            break;
        case FunctionType::Trigonometric:
            std::cout << "Functin Type: Constant Trigonometric" << std::endl; 
            std::cout << "Function Form: " << _form << std::endl;
            break;
        case FunctionType::Sine:
            std::cout << "Functin Type: Constant Sine" << std::endl; 
            std::cout << "Function Form: " << _form << std::endl;
            break;
        case FunctionType::Cosine:
            std::cout << "Functin Type: Constant Cosine" << std::endl; 
            std::cout << "Function Form: " << _form << std::endl;
            break;
        case FunctionType::Tangent:
            std::cout << "Functin Type: Constant Tangent" << std::endl; 
            std::cout << "Function Form: " << _form << std::endl;
            break;
        case FunctionType::Cotangent:
            std::cout << "Functin Type: Constant Cotangent" << std::endl; 
            std::cout << "Function Form: " << _form << std::endl;
            break;
        case FunctionType::Secant:
            std::cout << "Functin Type: Constant Secant" << std::endl; 
            std::cout << "Function Form: " << _form << std::endl;
            break;
        case FunctionType::Cosecant:
            std::cout << "Functin Type: Constant Cosecant" << std::endl; 
            std::cout << "Function Form: " << _form << std::endl;
            break;
        default:
            std::cout << "This Function Type Not Support Currently!!" << std::endl; 
            break;
    }
    
};
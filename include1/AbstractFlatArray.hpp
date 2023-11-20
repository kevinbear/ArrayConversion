#ifndef ABSTRACT_FLAT_ARRAY
#define ABSTRACT_FLAT_ARRAY

#include "./AbstractConversion.hpp"
class AbstractTwoDArray;

class AbstractFlatArray: public AbstractConversion{
public:
    ~AbstractFlatArray() = default;
    virtual AbstractTwoDArray* convertToTwoD(int width, int height) = 0;
    AbstractFlatArray(){}
    AbstractFlatArray(int size){}
    // member function
    // find
    void content(){}
    void iteration(){}
    AbstractTwoDArray* convertToTwoD(int width, int height) override;
private:
    size_t __size = 0;
    size_t __height = 0;
    size_t __width = 0;
    int *__flatArr = nullptr;
};

#endif
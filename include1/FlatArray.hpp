#ifndef FLAT_ARRAY_HPP
#define FLAT_ARRAY_HPP
#include "AbstractFlatArray.hpp" 

class TwoDArray;
class FlatArray: public AbstractFlatArray{
public:
    // Constructor
    FlatArray(){}
    FlatArray(int size){}
    // Destructor
    ~FlatArray(){}
    // member function
    // find
    AbstractTwoDArray* convertToTwoD(int width, int height) override;
    AbstractFlatArray* convertToFlat() override;
    
private:
    size_t __size = 0;
    size_t __height = 0;
    size_t __width = 0;
    int *__flatArr = nullptr;
};
#endif
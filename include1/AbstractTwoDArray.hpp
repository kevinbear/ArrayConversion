#ifndef ABSTRACT_TWO_D_ARRAY
#define ABSTRACT_TWO_D_ARRAY
#include <set>
#include "./AbstractConversion.hpp"
class AbstractFlatArray;

class AbstractTwoDArray: public AbstractConversion{
public:
    ~AbstractTwoDArray();
    virtual AbstractFlatArray* convertToFlat() = 0;
    AbstractTwoDArray(){}

    AbstractTwoDArray(int width, int height): __width(width), __height(height){}
    // member function

    // convert to two dimesion
    // Precondition: The 2D array does existed
    // Postcondition: If the process successful, then return a FlatArray object; If not, give the error output
    AbstractFlatArray* convertToFlat() override{}
    // overloading the operator [][]
    
    bool find(int value, int& w, int& h){}
    
    bool write(int column, int row, int value){}
    
    void content(){}
private:
    int __width;
    int __height;
    int **__Arr = nullptr;
    std::set<int> __record;
};

#endif

#ifndef TWO_DARRAY_HPP
#define TWO_DARRAY_HPP

#include "AbstractTwoDArray.hpp"
class FlatArray;

class TwoDArray : public AbstractTwoDArray {
public:
    // Constructor
    TwoDArray();
    TwoDArray(int width, int height);
    ~TwoDArray();
    // member function

    // convert to two dimesion
    // Precondition: The 2D array does existed
    // Postcondition: If the process successful, then return a FlatArray object; If not, give the error output
    AbstractFlatArray* convertToFlat() override;
    // overloading the operator [][]
private:
    int __width;
    int __height;
    int **__Arr = nullptr;
    std::set<int> __record;
};

#endif // CONCRETE_TWO_D_ARRAY_HPP

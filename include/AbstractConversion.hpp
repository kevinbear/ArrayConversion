#ifndef ABSTRACT_CONVERSION_HPP
#define ABSTRACT_CONVERSION_HPP
#include <iostream>
class AbstractTwoDArray;
class AbstractFlatArray;

class AbstractConversion {
public:
    virtual ~AbstractConversion() = default;
    
    virtual AbstractTwoDArray* convertToTwoD(int width, int height) = 0;
    virtual AbstractFlatArray* convertToFlat() = 0;
};

#endif

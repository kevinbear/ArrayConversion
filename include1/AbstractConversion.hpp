#ifndef ABSTRACT_CONVERSION_HPP
#define ABSTRACT_CONVERSION_HPP
#include <iostream>
#include "./AbstractFlatArray.hpp"
#include "./AbstractTwoDArray.hpp"

class AbstractTwoDArray;
class AbstractFlatArray;

class AbstractConversion {
public:
    virtual ~AbstractConversion() = default;
    
    // Method to convert to a 2D array
    virtual AbstractTwoDArray* convertToTwoD(int width, int height) = 0;

    // Method to convert to a flat array
    virtual AbstractFlatArray* convertToFlat() = 0;
};

#endif
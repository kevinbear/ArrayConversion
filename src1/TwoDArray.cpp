#include "../include/TwoDArray.hpp"
#include "../include/FlatArray.hpp"   // Include this if you're using FlatArray in the implementations

class FlatArray;
TwoDArray::TwoDArray() : AbstractTwoDArray() {}

TwoDArray::TwoDArray(int width, int height) : AbstractTwoDArray(width, height) {}

TwoDArray::~TwoDArray() {}

AbstractFlatArray* TwoDArray::convertToFlat() {
    // Your implementation here
    return new FlatArray(__width * __height);
}

AbstractTwoDArray* TwoDArray::convertToTwoD(int width, int height) {
    // Since this is already a 2D array, return a new instance of TwoDArray
    return new TwoDArray(width, height);
}
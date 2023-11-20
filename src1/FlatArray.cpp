#include "../include/TwoDArray.hpp"
#include "../include/FlatArray.hpp" 
class TwoDArray;

FlatArray::FlatArray() : AbstractFlatArray() {}

FlatArray::FlatArray(int size) : AbstractFlatArray(size) {}

FlatArray::~FlatArray() {
    delete [] __flatArr;
}

AbstractTwoDArray* FlatArray::convertToTwoD(int width, int height) {
    // Your implementation here
    if(__size != width*height){
        std::cerr<<"1D can't conver to 2D since width and height can't be divisible" << std::endl;
        exit(1);
    }
    return new TwoDArray(width, height);
}

AbstractFlatArray* FlatArray::convertToFlat() {
    // Since this is already a flat array, return a new instance of FlatArray
    return new FlatArray(__size);
}
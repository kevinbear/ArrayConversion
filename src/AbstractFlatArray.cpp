#include "../include/AbstractTwoDArray.hpp"
#include "../include/AbstractFlatArray.hpp" 
class AbstractTwoDArray;

AbstractFlatArray::AbstractFlatArray():  __size(10)  {
    __flatArr = new int[__size];
}
AbstractFlatArray::AbstractFlatArray(int size): __size(size){
    __flatArr = new int[__size];
}
void AbstractFlatArray::content(){
    for(size_t i=0; i<__size; i++)
        std::cout << __flatArr[i] << " ";
    std::cout << std::endl;
}

void AbstractFlatArray::iteration(){
     for(size_t i=0; i<__size; ++i)
        std::cout << __flatArr[i] << std::endl;
}

AbstractTwoDArray* AbstractFlatArray::convertToTwoD(int width, int height) {
    if(__size != width*height){
        std::cerr<<"1D can't conver to 2D since width and height can't be divisible" << std::endl;
        exit(1);
    }
    return AbstractTwoDArray(width, height);
}
int AbstractFlatArray::getSize(){
    return __size;
}
int* AbstractFlatArray::getArray(){
    return __flatArr;
}
AbstractFlatArray::~AbstractFlatArray(){
    delete [] __flatArr;
}


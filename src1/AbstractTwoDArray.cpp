#include "../include/AbstractTwoDArray.hpp"
#include "../include/AbstractFlatArray.hpp"   // Include this if you're using FlatArray in the implementations

class AbstractFlatArray;

// Constructor implementations
AbstractTwoDArray::AbstractTwoDArray() : __width(5), __height(5){
    // create the outter array of the 2D array (We build the height first)
    __Arr = new int *[__height];
    // next we build the each floor; or we create a width array and put to the each floor of outter array
    for(size_t row=0; row< __height; ++row){
        __Arr[row] =  new int[__width];
    }
    // Initialize the number 0
    for(size_t col=0; col < __height; ++col){
        for(size_t row=0; row < __width; ++row){
            __Arr[col][row] = 0;
        }
    }
}
AbstractTwoDArray::AbstractTwoDArray(int width, int height): __width(width), __height(height){
    // create a row's number first (it a column)
    // ___
    //| 1 |
    //| 2 |
    //| 3 |
    //| 4 |
    // ---
    // put row array to each 
    // ___      ___________________
    //| 1 | -> | 1 | 2 | 3 | 4 | 5 |
    //| 2 | -> | 1 | 2 | 3 | 4 | 5 |
    //| 3 | -> | 1 | 2 | 3 | 4 | 5 |
    //| 4 | -> | 1 | 2 | 3 | 4 | 5 |
    // ---      -------------------
    __Arr = new int *[__height];

    for(size_t row=0; row< __height; ++row){
        __Arr[row] =  new int[__width];
    }

    for(size_t col=0; col < __height; ++col){
        for(size_t row=0; row < __width; ++row){
            __Arr[col][row] = 0;
        }
    }

}
// Destructor implementation
AbstractTwoDArray::~AbstractTwoDArray() {
    for (size_t i=0; i<__height; ++i){
        // std::cout << "Deleting row " << i << std::endl;
        delete [] __Arr[i];
    }
    // std::cout << "Deleting __Arr" << std::endl;
    delete [] __Arr;
}

// Member function implementations
AbstractFlatArray* AbstractTwoDArray::convertToFlat() {
    // ... your implementation here ...
    int size = __width * __height;
    return new FlatArray(size);  // This creates a new FlatArray and returns its pointer
}

//find
// Precondition: give the (value) that you want to check which are existed in the array; 
// and passing the two variable to get the index of width and height if there are exits
// Postconditiion: Return the (true) if the function find the value existed in 2D array;
// Also put the index to the (w, h); If there doesn't exist any value user passing in
// then return (false) and the (w, h) is (-1, -1)
bool AbstractTwoDArray::find(int value, int& w, int& h) {
    // return the first vlaue show in [h][w]
    h = -1;
    w = -1;
    if(__record.contains(value)){
        for(size_t i=0; i<__height; i++)
        for(size_t j=0; j<__width; j++){
            if(__Arr[i][j] == value){
                h = i, w = j;
                return true;
            } 
        }
    }
    return false;
}
// write 
// Precondition: Psssing 3 parameters (column, row, value) column for width, and row for height
// value is to write in the 2D array
// Postcondition: If the process is successful, then return true and put the value to set;
// If not, then return false 
bool AbstractTwoDArray::write(int column, int row, int value) {
    if(row > __height || row < 0 || column > __width || column < 0) return false;
    __Arr[row-1][column-1] = value;
    if(!__record.contains(value)) __record.insert(value);
    return true;
}
// content
// Precondition: The 2D array does exist
// Postcondition: Print out the value inside the 2D array
void AbstractTwoDArray::content() {
    for(size_t col=0; col < __height; ++col){
        for(size_t row=0; row < __width; ++row){
            std::cout << __Arr[col][row] << " ";
        }
        std::cout << std::endl;
    }
}

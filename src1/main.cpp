#include <iostream>
#include <iomanip>
#include <set>
#include "../include/TwoDArray.hpp"  // Include the header for TwoDArray
#include "../include/FlatArray.hpp"  // Include the header for FlatArray
using namespace std;

int main()
{
    TwoDArray planeArray(5,5);
    if(!planeArray.write(5,4, 10)){
        std::cerr << "write in failure" << std::endl;
        std::cerr << "Index of row or column is incorrect!" << std::endl;
    }
    int height, width;
    if(planeArray.find(10, width, height)){
        std::cout << "Value is inside of 2D array" << std::endl;
        std::cout << "Index of 2D array is (" << width << ", " << height << ")" << std::endl;
    }else std::cerr << "The value doesn't exist in the array" << std::endl;
    planeArray.content();
    FlatArray td2f = planeArray.convertToFlat();
    td2f.content();
    std::cout << "-----------------------" << std::endl;
    // test flatArray
    FlatArray fa(40);
    TwoDArray tfa = fa.convertToTwoD(10, 4);
    tfa.content();
    return 0;
}
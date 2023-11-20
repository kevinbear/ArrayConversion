#ifndef FLAT_ARRAY_HPP
#define FLAT_ARRAY_HPP

#include "AbstractFlatArray.hpp"
#include "TwoDArray.hpp"  // Needed for the conversion methods
class TwoDArray;
class FlatArray : public AbstractFlatArray {
public:
    FlatArray();
    FlatArray(int size);
    ~FlatArray() override;

    AbstractTwoDArray* convertToTwoD(int width, int height) override;
    AbstractFlatArray* convertToFlat() override;
};

#endif

#ifndef TWO_D_ARRAY_HPP
#define TWO_D_ARRAY_HPP

#include "AbstractTwoDArray.hpp"
#include "FlatArray.hpp"  // Needed for the conversion methods
class FlatArray;
class TwoDArray : public AbstractTwoDArray {
public:
    TwoDArray();
    TwoDArray(int width, int height);
    ~TwoDArray() override;

    AbstractFlatArray* convertToFlat() override;
    AbstractTwoDArray* convertToTwoD(int width, int height) override;
};

#endif

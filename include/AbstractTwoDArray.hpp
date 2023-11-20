#ifndef ABSTRACT_TWO_D_ARRAY_HPP
#define ABSTRACT_TWO_D_ARRAY_HPP

#include <set>
#include "AbstractConversion.hpp"

class AbstractTwoDArray : public AbstractConversion {
public:
    virtual ~AbstractTwoDArray();

    AbstractTwoDArray() = default;
    AbstractTwoDArray(int width, int height);

    bool find(int value, int& w, int& h);
    bool write(int column, int row, int value);
    void content();
    // Acessor, Getter
    int** getArray();
    int getWidth();
    int getHeight();

private:
    int __width = 0;
    int __height = 0;
    int** __Arr = nullptr;
    std::set<int> __record;
};

#endif

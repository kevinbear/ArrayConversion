#ifndef ABSTRACT_FLAT_ARRAY_HPP
#define ABSTRACT_FLAT_ARRAY_HPP

#include "AbstractConversion.hpp"

class AbstractFlatArray : public AbstractConversion {
public:
    virtual ~AbstractFlatArray() = default;

    AbstractFlatArray() = default;
    AbstractFlatArray(int size);

    void content();
    void iteration();

    int* getArray();
    int getSize();

private:
    size_t __size = 0;
    int* __flatArr = nullptr;
};

#endif

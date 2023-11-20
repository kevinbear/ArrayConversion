```
src/AbstractTwoDArray.cpp:7:1: error: definition of explicitly-defaulted ‘AbstractTwoDArray::AbstractTwoDArray()’
    7 | AbstractTwoDArray::AbstractTwoDArray() : __width(5), __height(5){
      | ^~~~~~~~~~~~~~~~~

```

```
In file included from src/AbstractTwoDArray.cpp:1:
src/../include/AbstractTwoDArray.hpp:11:5: note: ‘AbstractTwoDArray::AbstractTwoDArray()’ explicitly defaulted here
   11 |     AbstractTwoDArray() = default;
      |     ^~~~~~~~~~~~~~~~~
src/AbstractTwoDArray.cpp:60:20: error: no declaration matches ‘AbstractFlatArray* AbstractTwoDArray::convertToFlat()’
   60 | AbstractFlatArray* AbstractTwoDArray::convertToFlat() {
      |                    ^~~~~~~~~~~~~~~~~
src/AbstractTwoDArray.cpp:60:20: note: no functions named ‘AbstractFlatArray* AbstractTwoDArray::convertToFlat()’
In file included from src/AbstractTwoDArray.cpp:1:
src/../include/AbstractTwoDArray.hpp:7:7: note: ‘class AbstractTwoDArray’ defined here
    7 | class AbstractTwoDArray : public AbstractConversion {
      |       ^~~~~~~~~~~~~~~~~
src/AbstractFlatArray.cpp:5:1: error: definition of explicitly-defaulted ‘AbstractFlatArray::AbstractFlatArray()’
    5 | AbstractFlatArray::AbstractFlatArray():  __size(10)  {
      | ^~~~~~~~~~~~~~~~~

```      
```
In file included from src/AbstractFlatArray.cpp:2:
src/../include/AbstractFlatArray.hpp:10:5: note: ‘constexpr AbstractFlatArray::AbstractFlatArray()’ explicitly defaulted here
   10 |     AbstractFlatArray() = default;
      |     ^~~~~~~~~~~~~~~~~
src/AbstractFlatArray.cpp:22:20: error: no declaration matches ‘AbstractTwoDArray* AbstractFlatArray::convertToTwoD(int, int)’
   22 | AbstractTwoDArray* AbstractFlatArray::convertToTwoD(int width, int height) {
      |                    ^~~~~~~~~~~~~~~~~
src/AbstractFlatArray.cpp:22:20: note: no functions named ‘AbstractTwoDArray* AbstractFlatArray::convertToTwoD(int, int)’
In file included from src/AbstractFlatArray.cpp:2:
src/../include/AbstractFlatArray.hpp:6:7: note: ‘class AbstractFlatArray’ defined here
    6 | class AbstractFlatArray : public AbstractConversion {
      |       ^~~~~~~~~~~~~~~~~
src/AbstractFlatArray.cpp:35:1: error: definition of explicitly-defaulted ‘AbstractFlatArray::~AbstractFlatArray()’
   35 | AbstractFlatArray::~AbstractFlatArray(){
      | ^~~~~~~~~~~~~~~~~

```
```
In file included from src/AbstractFlatArray.cpp:2:
src/../include/AbstractFlatArray.hpp:8:13: note: ‘virtual AbstractFlatArray::~AbstractFlatArray()’ explicitly defaulted here
    8 |     virtual ~AbstractFlatArray() = default;
      |             ^

```


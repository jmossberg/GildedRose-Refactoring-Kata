#ifndef GILDED_ROSE_REFACTORING_KATA_1_GILDEDROSE_H
#define GILDED_ROSE_REFACTORING_KATA_1_GILDEDROSE_H


#include <ostream>

class GildedRose {
public:
    GildedRose(int value);
    int getValue() const;
    int getAge() const;
    void setAge(int age);

    friend std::ostream &operator<<(std::ostream &os, const GildedRose &rose);
private:
    int value;
    int age;
};


#endif //GILDED_ROSE_REFACTORING_KATA_1_GILDEDROSE_H

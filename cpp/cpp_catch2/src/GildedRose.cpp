#include "GildedRose.h"

std::ostream &operator<<(std::ostream &os, const GildedRose &rose) {
    return os << rose.getValue();
}

GildedRose::GildedRose(int value) : value(value) {}

int GildedRose::getValue() const {
    return value;
}

int GildedRose::getAge() const {
    return age;
}

void GildedRose::setAge(int age) {
    GildedRose::age = age;
}

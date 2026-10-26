#include <iostream>
#include <string>
#include "Box.hpp"

template <typename T>
Box<T>::Box(const T& v) : value(v) {

}

// Implemented outside the class
template <typename T>
const T& Box<T>::getValue() const {
    return value;
}

template <typename T>
void Box<T>::setValue(const T& v) {
    value = v;
}
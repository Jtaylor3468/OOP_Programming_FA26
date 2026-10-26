#ifndef BOX_HPP
#define BOX_HPP

// Template class
template <typename T>
class Box {
public:
    Box(const T& v);

    // Implement getter and setter
    void setValue(const T& v);

    const T& getValue() const;

private:
    T value;

};

#include "Box.tpp"

#endif
#ifndef VECTOR_HPP
#define VECTOR_HPP

class Vector {
public:
    Vector(int capacity = 10);

    ~Vector();

    // Copy constructor
    Vector(const Vector& other);
     
    void push_back(int val);

    bool empty() const; // TODO

    bool full() const;

    void print() const;

    void pop_back();        // Delete last element from the vector

    int at(int index) const; // Returns the value at the given index

private:
    void allocateMemory(int new_capacity);      // Allocate a new array of a given capacity
    int* data;      // array of int elements
    int size;       // the number of elements in the array
    int capacity;   // thye max number of elements array can hold

};

#endif
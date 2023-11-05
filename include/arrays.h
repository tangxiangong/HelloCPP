#ifndef HELLOCPP_ARRAYS_H
#define HELLOCPP_ARRAYS_H

#include <iostream>
using std::vector;

template<class T>
class Vector {
private:
    vector<T> m_data;
    int m_length;
public:
    Vector();

    Vector(const T *, int);

    explicit Vector(const vector<T>&);

    Vector(const Vector<T>&);

    Vector& operator=(const Vector<T>&);

    inline T operator[](int);

    int size();

//    ~Vector();
};

template<class T>
void print(const Vector<T>&);

#endif //HELLOCPP_ARRAYS_H

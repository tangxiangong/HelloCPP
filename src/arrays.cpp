#include <iostream>
#include <vector>
#include "arrays.h"

template<class T>
Vector<T>::Vector() : m_length(0), m_data(new vector<T>()) {}

template<class T>
Vector<T>::Vector(const T *data, int length) {
    this->m_length = length;
    this->m_data = new vector<T>(data);
}

template<class T>
Vector<T>::Vector(const vector<T> &data) {
    this->m_data = data;
    this->m_length = data.size();
}

template<class T>
Vector<T>::Vector(const Vector<T>& rhs) {
    this->m_length = rhs.m_length;
    this->m_data = rhs.m_data;
}

template<class T>
inline T Vector<T>::operator[](const int n) {
//    static_assert(n > 0 && n < this->m_length);
    return this->m_data[n];
}

//template<class T>
//Vector<T>::~Vector() {
//    delete this->m_data;
//}

template<class T>
void print(const Vector<T>& v) {
    int n = v.size();
    if (n == 0)
        std::cout << "[]" << std::endl;
    else {
        std::cout << "[";
        for(int k=0; k<n-1; k++)
            std::cout << v[k] << " ";
        std::cout << v[n-1] << "]" << std::endl;
    }
}

template<class T>
int Vector<T>::size() {
    return this->m_length;
}

template<class T>
Vector<T>& Vector<T>::operator=(const Vector<T>& rhs) {
    if(this != &rhs){
        if(this->m_length != rhs.m_length) {
            delete[] this->m_data;
            this->m_length = rhs.m_length;
            this->m_data = new vector<T>(this->m_length);
        }
        this->m_data = rhs.m_data;
    }
    return *this;
}
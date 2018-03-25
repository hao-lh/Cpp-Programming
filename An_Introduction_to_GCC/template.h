#pragma once

template <class T>
class Buffer {
public:
    Buffer(unsigned int n);
    ~Buffer();
    void insert(const T& x);
    T get(unsigned int k) const;

private:
    unsigned int i;
    unsigned int size;
    T* pT;
};

template <class T>
Buffer<T>::Buffer(unsigned int n) {
    i = 0;
    size = n;
    pT = new T[n];
}

template <class T>
Buffer<T>::~Buffer() {
    delete[] pT;
    size = 0;
    i = 0;
}

template <class T>
void Buffer<T>::insert(const T& x) {
    pT[i++] = x;
}

template <class T>
T Buffer<T>::get(unsigned int k) const {
    if (k < size) return pT[k];
}

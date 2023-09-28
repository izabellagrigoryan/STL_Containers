#ifndef ARRAY_H
#define ARRAY_H

template <typename T>

class Array
{
public:
    T* ptr;
    int size;

    Array()   //default constructor
    {
        this->size = 1;
        this->ptr = new T(0);
    }

    Array(int size);
    ~Array() { delete[] ptr; }

    Array(const Array<T>& array);
    Array<T>& operator=(const Array<T>& array);

    Array(Array&& arr) noexcept;
    Array<T>& operator=(Array<T>&& arr) noexcept;

    T operator[](int i) const;
    T& operator[](int i);

    int getsize();
    void push(T element);
    void pop();
    void print();

};

#endif
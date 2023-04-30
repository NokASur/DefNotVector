// TestTemp.h
#pragma once

template<class T>
class MyVector {
public:
    MyVector();
    int size();
    int capacity();
    bool empty();
    void extend_memory();
    T front();
    T back();
    void shrink_to_fit();
    void mem_realloc();
    void clear();
    //void insert();
    //void insert_range();
    //void emplace();
    //void emplace_back();
    //void erase();
    void push_back(T n);
    void resize(size_t n);
    void resize(size_t n, T& val);
    void swap(MyVector<T>);
    T pop_back();
    void begin();
    void end();
    void operator=(MyVector<T>);
    T& operator[](size_t index);
    bool operator==(MyVector<T>);

private:
    T* arr_;
    size_t siz_,cap_;
};




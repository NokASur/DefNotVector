// TestTemp.cpp
#include <utility>
#include "MyVector.h"

template<class T>

MyVector<T>::MyVector() {
    arr_ = new T[1];
    siz_ = 0, cap_ = 1;
}

template<class T>
int MyVector<T>::size() {
    return 0;
}

template<class T>
int MyVector<T>::capacity() {
    return 1;
}

template<class T>
bool MyVector<T>::empty() {
    return siz_ == 0;
}

template<class T>
void MyVector<T>::extend_memory() {
    T *arr1 = new T[siz_ * 2];
    for (int i = 0; i < siz_; i++) {
//        *(arr1 + i) =std::move(arr_[i]);
        arr1[i] = std::move(arr_[i]);
    }
    delete[]arr_;
    arr_ = arr1;
    cap_ *= 2;
}

template<class T>
void MyVector<T>::push_back(T n) {
    if (siz_ >= cap_) {
        extend_memory();
    }
    arr_[siz_++] = n;
}

template<class T>
T &MyVector<T>::operator[](size_t index) {
    return arr_[index];
}

template<class T>
T MyVector<T>::front() {
    return arr_[0];
}

template<class T>
T MyVector<T>::back() {
    return arr_[siz_ - 1];
}

template<class T>
void MyVector<T>::shrink_to_fit() {
    cap_ = siz_;
    mem_realloc();
}

template<class T>
void MyVector<T>::mem_realloc() {
    T *arr = new T[cap_];
    for (int i = 0; i < cap_; i++) {
        arr[i] = arr_[i];
    }
    delete[] arr_;
    arr_ = arr;
}


template<class T>
void MyVector<T>::clear() {
    siz_ = 0;
}

//template<class T>
//void MyVector<T>::insert() {
//
//}

//template<class T>
//void MyVector<T>::insert_range() {
//
//}
//
//template<class T>
//void MyVector<T>::emplace() {
//
//}

//template<class T>
//void MyVector<T>::emplace_back() {
//
//}

//template<class T>
//void MyVector<T>::erase() {
//
//}

template<class T>
void MyVector<T>::resize(size_t n) {
    if (n > cap_) {
        cap_ = n;
        mem_realloc();
    }
    siz_ = n;
}

template<class T>
void MyVector<T>::resize(size_t n, T &val) {
    if (n > cap_) {
        cap_ = n;
        mem_realloc();
    }
    if (n > siz_) {
        for (int i = siz_; i < n; i++) {
            arr_[i] = val;
        }
    }

    siz_ = n;
}

template<class T>
void MyVector<T>::swap(MyVector<T> vec) {
    std::swap(siz_,vec.size());
    std::swap(cap_,vec.capacity());
    std::swap(arr_,vec.arr_);
}

template<class T>
T MyVector<T>::pop_back() {
    --siz_;
    return arr_[siz_];
}

template<class T>
void MyVector<T>::begin() {

}

template<class T>
void MyVector<T>::end() {

}

template<class T>
void MyVector<T>::operator=(MyVector<T> v) {
    ////
}

template<class T>
bool MyVector<T>::operator==(MyVector<T> v) {
    if (v.size() != siz_) {
        return false;
    }
    for (int i = 0; i < siz_; i++) {
        if (v[i] != arr_[i]) {
            return false;
        }
    }
    return true;
}






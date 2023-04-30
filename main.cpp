#include "bits/stdc++.h"
#include "MyVector.h"
#include "MyVector.cpp"



int main() {
    MyVector<int>v;
    std::cout << v.size() << " " << v.capacity() << " " << v.empty() << std::endl;
    v.push_back(5);
    std::cout << v.size() << " " << v.capacity() << " " << v.empty() << std::endl;
//    std::cout << v[0] << std::endl;
//    v.clear();
//    std::cout << v[0] << std::endl;
    std::vector<int>v1(1,5);

    v1.clear();
    std::cout << v1[0] << std::endl;
}
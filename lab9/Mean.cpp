#include <iostream>
#include <vector>

template<class T>
T Mean(const std::vector<T> &uno){
    T mean;
    T sum = 0;
    for(auto t: uno)
        sum += t;
    mean = sum/uno.size();
    return mean;
}

int main() {
    std::vector<int> A;
    int m;
    for(auto i=0; i<6; i++){
        A.push_back(5);
        A.push_back(3);
    }

    m = Mean(A);
    std:: cout<< m;
    return 0;
}
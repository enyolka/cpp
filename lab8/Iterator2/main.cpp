#include <iostream>
#include "Vector.h"
#include "Iterator.h"

int main() {
    Vector<int> v;
    v.PushBack(1);
    v.PushBack(3);
    Vector<int> v2=v;
    v2.PushBack(4);
    for(int i=0;i<v.GetSize();i++){
        int t;
        v.Get(t,i);
        std::cout<<t<<" ";
    }


    return 0;
}
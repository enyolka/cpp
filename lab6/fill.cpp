#include <iostream>
//#include "Fill.h"
#include <vector>

class ArrayFill {
public:
    virtual int Value(int index) const =0;
};

// *** KLASY ***

class UniformFill : public ArrayFill {
public:
    UniformFill(int value = 0) : value_{value} {}
    ~UniformFill(){}
    virtual int Value(int index) const override;
private:
    int value_;
};


int UniformFill::Value(int index) const {
    return value_;
}


class IncrementalFill : public ArrayFill {
public:
    IncrementalFill(int start = 0, int step = 0) : start_{start}, step_{step} {}
    ~IncrementalFill(){}
    virtual int Value(int index) const override;
private:
    int start_, step_;
};


int IncrementalFill::Value(int index) const{
    return start_ + step_ * index;
}

/*class RandomFill : public ArrayFill {
public:
    RandomFill(std::unique_ptr<std::default_random_engine> generator, std::unique_ptr<std::uniform_int_distribution<int>> distribution): generator_{generator}, distribution_{distribution}{}
    ~RandomFill(){}
    virtual int Value(int index) const override;
private:
    std::unique_ptr<std::default_random_engine> generator_;
    std::unique_ptr<std::uniform_int_distribution<int>> distribution_;
};*/


class SquaredFill : public ArrayFill {
public:
    SquaredFill(int a = 1, int b = 0): a_{a}, b_{b} {}
    ~SquaredFill(){}
    virtual int Value(int index) const override;
private:
    int a_, b_;
};

int SquaredFill::Value(int index)const{
	return ((a_ * (index * index)) + b_); 
}


// *** MAIN ***

void FillArray(size_t size, const ArrayFill &filler, std::vector<int> *v) {
    v->clear();
    v->reserve(size);
    for (size_t i = 0; i < size; i++) {
        v->emplace_back(filler.Value(i));
    }
}

int main() {
    std::vector<int> vs;
    FillArray(10, IncrementalFill {12,2}, &vs);
	for(auto c: vs)
		std::cout << c << "\t";
    return 0;
}

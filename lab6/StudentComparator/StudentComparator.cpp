//
// Created by emilia on 12.05.19.
//
#include <iostream>
#include <string>
#include <vector>
#include <experimental/optional>
#include <boost/algorithm/string.hpp>
#include "StudentComparator.h"


using ::std::string;
using ::std::stringstream;
using ::std::experimental::optional;
using ::std::vector;


bool compareStrings(string str1, string str2){
    int len = (str1.length() <= str2.length() ? str1.length() : str2.length());
    for(int i=0; i <= len; i++){
        if((int)str1[i] < (int)str2[i])
            return true;
        else if((int)str1[i] > (int)str2[i])
            return false;
        else continue;
    }
    return false;
}

bool ByFirstNameAscending::IsLess(const Student &left, const Student &right) const {
    if(compareStrings(left.first_name, right.first_name))
        return true;
    return false;
}

bool ByFirstNameDescending::IsLess(const Student &left, const Student &right) const {
    if(compareStrings(right.first_name, left.first_name))
        return true;
    return false;
}

bool ByLastNameAscending::IsLess(const Student &left, const Student &right) const {
    if(compareStrings(left.last_name, right.last_name))
        return true;
    return false;
}

bool ByLastNameDescending::IsLess(const Student &left, const Student &right) const {
    if(compareStrings(right.last_name, left.last_name))
        return true;
    return false;
}



//
// Created by emilia on 13.04.19.
//
#include <iostream>
#include <string>
#include <vector>
#include <experimental/optional>
#include <boost/algorithm/string.hpp>

#include "Name.h"

using ::std::string;
using ::std::stringstream;
using ::std::experimental::optional;
using ::std::vector;

std::vector<std::string> splitString(const std::string &str){
    std::vector<std::string> cont;
    boost::split(cont, str, boost::is_any_of(" "));
    return cont;
}

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

Name::Name(const string &first_names_surname){
    vector<string> splited_names = splitString(first_names_surname);
    int len = splited_names.size();

    first_name_ = splited_names[0];
    if(len == 2)
        last_name_ = splited_names[1];
    else if(len == 3) {
        second_name_ = splited_names[1];
        last_name_ = splited_names[2];
    } else{
        second_name_ = splited_names[1];
        third_name_ = splited_names[2];
        last_name_ = splited_names[3];
    }
}

string Name::FirstName() const{
    return first_name_;
}
string Name::SecondName() const{
    return second_name_;
}
string Name::ThirdName() const{
    return third_name_;
}
string Name::Surname() const{
    return last_name_;
}
string Name::ToFullInitials() const{
    string result;

    result += first_name_[0];
    result += ". ";
    if(second_name_ != ""){
        result += second_name_[0];
        result += ". ";
    }
    if(third_name_ != ""){
        result += third_name_[0];
        result += ". ";
    }
    result += last_name_[0];
    result += ". ";

    return result;
}
string Name::ToFirstNamesInitials() const{
    string result;

    result += first_name_[0];
    result += ". ";
    if(second_name_ != ""){
        result += second_name_[0];
        result += ". ";
    }
    if(third_name_ != ""){
        result += third_name_[0];
        result += ". ";
    }
    result += last_name_;

    return result;
}
string Name::ToSurnameNames() const{
    string result;

    result += last_name_;
    result += " ";
    result += first_name_;
    result += " ";
    result += second_name_;
    result += " ";
    result += third_name_;

    return result;
}
string Name::ToNamesSurname() const{
    string result;

    result += first_name_;
    result += " ";
    if(second_name_ != ""){
        result += second_name_;
        result += " ";
    }
    if(third_name_ != ""){
        result += third_name_;
        result += " ";
    }
    result += last_name_;

    return result;
}
bool Name::IsBeforeBySurname(const Name &other) const{
    string str1 = last_name_;
    string str2 = other.last_name_;
    return compareStrings(str1,str2);
}
bool Name::IsBeforeByFirstName(const Name &other) const{
    string str1 = first_name_;
    string str2 = other.first_name_;
    return compareStrings(str1,str2);
}


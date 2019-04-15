//
// Created by emilia on 13.04.19.
//

#ifndef NAME_NAME_H
#define NAME_NAME_H

#include <iostream>
#include <string>
#include <experimental/optional>


using ::std::string;
using ::std::stringstream;
using ::std::experimental::optional;

class Name{
    string first_name_;
    string second_name_;

    string third_name_;
    string last_name_;
public:
    explicit Name(const string &first_names_surname);

    string FirstName() const;
    string SecondName() const;
    string ThirdName() const;
    string Surname() const;
    string ToFullInitials() const;
    string ToFirstNamesInitials() const;
    string ToSurnameNames() const;
    string ToNamesSurname() const;
    bool IsBeforeBySurname(const Name &other) const;
    bool IsBeforeByFirstName(const Name &other) const;
};


#endif //NAME_NAME_H

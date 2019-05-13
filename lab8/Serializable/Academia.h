//
// Created by emilia on 13.05.19.
//

#ifndef SERIALIZABLE_ACADEMIA_H
#define SERIALIZABLE_ACADEMIA_H

#include "Serializer.h"

class Serializable{
public:
    virtual std::string Serialize(Serializer* serializer) = 0;
};

class Building : public Serializable{
    std::string street;
    int street_number;
public:
    Building(std::string street_, int street_number_): street(street_), street_number(street_number_) {}
    Building(const Building& origin): street(origin.street), street_number(origin.street_number) {}
    ~Building() = default;

    std::string Serialize(Serializer* serializer) override;
};


#endif //SERIALIZABLE_ACADEMIA_H

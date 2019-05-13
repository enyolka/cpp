//
// Created by emilia on 13.05.19.
//

#ifndef SERIALIZABLE_SERIALIZER_H
#define SERIALIZABLE_SERIALIZER_H

#include <iostream>
#include <string>
#include <map>
#include <sstream>


class Serializer {
public:
    std::map<std::string, std::string> data;
    Serializer() = default;
    virtual std::string Save() = 0;
    void Add(const std::string key, const std::string value);
};

class XmlSerializer : public Serializer{
public:
    XmlSerializer() = default;
    ~XmlSerializer() = default;

    std::string Save() override;
    friend std::ostream& operator<<(std::ostream& output, XmlSerializer& xml);
};

class JsonSerializer : public Serializer{
public:
    JsonSerializer() = default;
    ~JsonSerializer() = default;

    std::string Save() override;
    friend std::ostream& operator<<(std::ostream& output, JsonSerializer& json);
};


#endif //SERIALIZABLE_SERIALIZER_H

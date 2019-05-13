#include <iostream>
#include <string>
#include "Serializer.h"
#include "Academia.h"

int main() {
    Building b1("Ciasteczkowa", 11);

    XmlSerializer* xml = new XmlSerializer;
    JsonSerializer* json = new JsonSerializer;
    std::cout << b1.Serialize(xml);
    std::cout << b1.Serialize(json);

    return 0;
}
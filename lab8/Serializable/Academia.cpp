//
// Created by emilia on 13.05.19.
//

#include "Academia.h"

std::string Building::Serialize(Serializer *serializer) {
    serializer -> Add("street", street);
    serializer -> Add("streetnumber", std::to_string(street_number));

    return serializer -> Save();
}


//
// Created by emilia on 13.05.19.
//

#include "Serializer.h"

void Serializer::Add(const std::string key, const std::string value) {
    data[key] = value;
}

std::string XmlSerializer::Save() {
    std::ostringstream outputs;
    outputs << "<?xml version=\\\"1.0\\\" encoding=\\\"UTF-8\\\"?>\n<obj>\n"; // przykladowo
    for(auto x: data)
        outputs << " <" << x.first << ">" << x.second << "</" << x.first << ">\n";
    outputs <<"</obj>\n";
    return outputs.str();
}

std::ostream& operator<<(std::ostream& output, XmlSerializer& xml){
    output << xml.Save();
    return output;
}

std::string JsonSerializer::Save() {
    std::ostringstream outputs;
    outputs << "{ \n"; // przykladowo
    for(auto j: data)
        outputs << "   " << j.first << ": " << j.second << ",    \n";
    outputs <<"  }\n";
    return outputs.str();
}

std::ostream& operator<<(std::ostream& output, JsonSerializer& json){
    output << json.Save();
    return output;
}
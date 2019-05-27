//
// Created by emilia on 12.05.19.
//

#ifndef MOVIESUBTITLES_MOVIESUBTITLES_H
#define MOVIESUBTITLES_MOVIESUBTITLES_H

#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <regex>
#include <sstream>

#include "Exceptions.h"

class MovieSubtitles {
public:
    virtual void ShiftAllSubtitlesBy(int offset, int delay, std::string in, std::string out) =0;
    virtual ~MovieSubtitles() = default;
};

class MicroDvdSubtitles : public MovieSubtitles{
    /*int offset, delayed;
    std::string in;
    std::string out;*/
    std::vector<std::string> static read(const std::string in);
    void write(std::vector<std::string> lines, const std::string out);
    std::string replace(std::string& x, const std::string& rep, const std::string& rep_delayed);
    void validate(std::string x);
public:
    void ShiftAllSubtitlesBy(int offset, int delay, std::string in, std::string out);

};

#endif //MOVIESUBTITLES_MOVIESUBTITLES_H

//
// Created by emilia on 12.05.19.
//

#include "MovieSubtitles.h"


std::vector<std::string> MicroDvdSubtitles::read(const std::string in) {
    std::string l;
    std::vector<std::string> lines;
    std::ifstream input_file(in);

    if(!input_file)
        throw FileException(" No input file! ");

    while(getline(input_file,l)){
        lines.push_back(l);
    }
    input_file.close();

    for(auto l: lines)
        std::cout << l << std::endl;

    return lines;
}

void MicroDvdSubtitles::write(std::vector<std::string> lines, const std::string out) {
    std::ofstream output_file;
    output_file.open(out, std::ofstream::out | std::ofstream::trunc);

    if(!output_file)
        throw  FileException(" No output file! ");

    for(auto l: lines)
        output_file << l << std::endl;

    output_file.close();
}


std::string MicroDvdSubtitles::replace(std::string& x, const std::string& rep, const std::string& rep_delayed){
    size_t pos = x.find(rep);
    if(pos == std::string::npos)
        throw PositionException(" Przepelnienie tablicy! ");
    x.replace(pos, rep.length(), rep_delayed);
    return x;
}


void MicroDvdSubtitles::ShiftAllSubtitlesBy(int offset, int delay, std::string in,
                                            std::string out) {

    std::vector<std::string> lines = read(in);

    std::vector<int> time;
    std::smatch matches;
    std:: regex reg("([0-9][0-9])");
    for(auto l: lines){
        while(std::regex_search(l, matches, reg)){
            time.push_back(std::stoi(matches.str(1)));
            l = matches.suffix().str();
        }
    }

    std::string rep;
    std::string rep_delayed;
    for(auto x: lines) {
        for (auto t: time) {
            rep = std::to_string(t);
            rep_delayed = std::to_string(t+delay);
            replace(x, rep, rep_delayed);
        }
        std::cout << x << std::endl;
    }
}

void MicroDvdSubtitles::validate(std::string x) {
    std::regex form("^(\\{\\[0-9][0-9]\\}\\{\\[0-9][0-9]\\}).+$");
    if(!regex_match(x, form))
        throw FrameException(" Valid format! ");
}
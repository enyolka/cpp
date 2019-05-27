#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <fstream>
#include <regex>
#include <sstream>
#include "MovieSubtitles.h"
#include "Exceptions.h"


int main(int argc, char* argv[]){


    std::string input = argv[1];
    int delay = 3;
    int offset = 2;
    std::string output =argv[2];
    MicroDvdSubtitles m;
    try {
        m.ShiftAllSubtitlesBy(offset, delay, input, output);
    }
    catch(Exception exception) {
        std::cout << exception.msg_() << std::endl;
    }
    
    return 0;
}

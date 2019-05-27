//
// Created by emilia on 23.05.19.
//

#ifndef MOVIESUBTITLES_EXCEPTIONS_H
#define MOVIESUBTITLES_EXCEPTIONS_H

#include <iostream>
#include <string>

class Exception {
    std::string msg;
public:
    Exception(std::string msg_);
    virtual ~Exception() = default;
    std::string msg_() const;
};

class FileException : public Exception{
public:
    FileException(std::string msg_): Exception(msg_){}
};

class FrameException : public Exception{
public:
    FrameException(std::string msg_): Exception(msg_){}
};

class PositionException : public Exception{
public:
    PositionException(std::string msg_): Exception(msg_){}
};


#endif //MOVIESUBTITLES_EXCEPTIONS_H

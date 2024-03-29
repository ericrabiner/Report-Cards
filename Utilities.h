/*
Name: Eric Rabiner
Email: ericrabiner@gmail.com
Date: July 6, 2019
*/

#ifndef SICT_UTILITIES_H
#define SICT_UTILITIES_H

#include <string>
#include <iostream>

namespace sict {
    class Utilities {
        static char _delimiter;
        static size_t _fieldwidth;
        public:
        Utilities();
        const std::string extractToken(const std::string&, size_t&);
        const char getDelimiter() const;
        size_t getFieldWidth() const;
        static void setDelimiter(const char d);
        void setFieldWidth(size_t);
    };
}

#endif
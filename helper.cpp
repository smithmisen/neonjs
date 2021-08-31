/*
 * Copyright (c) 2021, Krisna Pranav
 *
 * SPDX-License-Identifier: MIT License
*/

// includes
#include <vector>
#include <string>
#include <sstream>
#include <time.h>
#include <ctype.h>

using namespace std;

namespace helpers {

// split tokens
vector<string> split(const string &s, char delim) {
    stringstream ss(s);
    string item;
    vector<string> tokens;
    while (getline(ss, item, delim)) {
        tokens.push_back(item);
    }
    return tokens;
}

// generate some random tokens 
string generateToken() {
    srand(time(NULL));

    string s = "";
    static const char alphanum[] =
        "0123456789"
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "abcdefghijklmnopqrstuvwxyz";

    for (int i = 0; i < 32; ++i) {
        s += alphanum[rand() % (sizeof(alphanum) - 1)];
    }

    return s;
}

// a simple url decoder s
void urldecode(char *dst, const char *src) {
    char a, b;
    while (*src) {
        if ((*src == '%') &&
            ((a = src[1]) && (b = src[2])) &&
            (isxdigit(a) && isxdigit(b))) {
            if (a >= 'a')
                a -= 'a' - 'A';
            if (a >= 'A')
                a -= ('A' - 10);
            else
                a -= '0';
            if (b >= 'a')
                b -= 'a' - 'A';
            if (b >= 'A')
                b -= ('A' - 10);
            else

                b -= '0';
            *dst++ = 16 * a + b;
            src += 3;
        }
        else if (*src == '+') {
            *dst++ = ' ';
            src++;
        }

        else {
            *dst++ = *src++;
        }
        }
        *dst++ = '\0';
    }
    

// strcopy
char* cstrcopy(string str) {
    char *text = new char[str.size() + 1];
    std::copy(str.begin(), str.end(), text);
    text[str.size()] = '\0';
    return text;
}

}
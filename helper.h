/*
 * Copyright (c) 2021, Krisna Pranav
 *
 * SPDX-License-Identifier: MIT License
 */

// includes
#include <vector>
#include <string>

using namespace std;

namespace helpers {
    vector<string> split(const string &s, char delim);
    string generateToken();
    void urldecode(char *dst, const char *src);
    char* cstrcopy(string str);
}
/*
 * Copyright (c) 2021, Krisna Pranav
 *
 * SPDX-License-Identifier: MIT License
 */

#include <iostream>
#include <fstream>
#include <algorithm>
#include <regex>
#include "json.hpp"
#include "helper.h"

#if defined(__linux__)
#define OS_NAME "Linux"
#elif defined(_WIN32)
#define OS_NAME "Windows"
#elif defined(__APPLE__)
#define OS_NAME "Darwin"
#elif defined(__FreeBSD__)
#define OS_NAME "FreeBSD"
#endif

#define NJ_VERSION "1.0.0"

#define APP_CONFIG_FILE "/neonjs.config.json"

using namespace std;

using json = nlohmann::json;

json options;
json globalArgs;
bool loadResFromDir = false;
string appPath;

vector <pair<string, string>> configOverride;

namespace settings {

string joinAppPath(string filename) {
    return appPath + filename;
}

string getFileContent(string filename) {
    string content;

    if(!loadResFromDir)
        return resources::getFileContent(filename);
    filename = settings::joinAppPath(filename);
    fs::FileReaderResult fileReaderResult = fs::readFile(filename);
        
    if(fileReaderResult.hasError)
        debug::log("ERROR", fileReaderResult.error);
    else
        content = fileReaderResult.data;
    return content;

}

string getMode() {
    return options["defaultMode"].get<std::string>();
}

void setPort(int port) {
    options["port"] = port;
}

}

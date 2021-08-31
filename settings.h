/*
 * Copyright (c) 2021, Michael Smith, Krisna Pranav
 *
 * SPDX-License-Identifier: MIT License
 */

#include "json.hpp"

using namespace std;

using json = nlohmann::json;
extern bool loadResFromDir;

namespace settings {

    json getConfig();

    string getFileContent(string filename);
    string getGlobalVars();
    void setGlobalArgs(json args);
    string joinAppPath(string filename);
    string getMode();

    void setPort(int port);
}

/*
 * Copyright (c) 2021, Michael Smith
 *
 * SPDX-License-Identifier: MIT License
 */

using namespace std;

extern bool loadResFromDir;

namespace settings {
    string getFileContent(string filename);
    string getGlobalVars();
    void setGlobalArgs(json args);
    string joinAppPath(string filename);
    string getMode();
    void setPort(int port);
}
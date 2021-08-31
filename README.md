# neonjs

[![forthebadge](https://forthebadge.com/images/badges/made-with-c-plus-plus.svg)](https://forthebadge.com)
[![forthebadge](https://forthebadge.com/images/badges/made-with-javascript.svg)](https://forthebadge.com)

A Framework That Builds Desktop Applications

## Getting Started:
```sh
$ npm i -g @neonjs/neonjs
$ neonjs create firstapp 
$ cd firstapp
$ neonjs run

# building your app
$ neonjs build
```

## Building From Source:

- Windows:
```bash
# Install the latest visual studio(aka cl.exe) C++ Compiler
$ ./build_windows.bat
```

- macOS:
```bash
# make sure you have installed the xcode tools
$ ./build_macos.sh
```

- Linux:
```
$ ./build_linux.sh
```

## Requirements
- Requirements for linux:
```
$ sudo apt-get install \ 
    libgtk-3-dev \ 
    libwebkit2gtk-4.0-37 \ 
    libwebkit2gtk-4.0-dev \
    libappindicator3-dev
```

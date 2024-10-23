#include "cppenv/LibraryManager.h"
#include "cppenv/CMakeManager.h"
#include <iostream>
#include <string>

int main(int argc, char** argv) {
    if (argc < 2) {
        std::cerr << "Usage: cppenv <command> [options]\n";
        return 1;
    }

    std::string command = argv[1];

    if (command == "install") {
        if (argc < 3) {
            std::cerr << "Usage: cppenv install <library_name>\n";
            return 1;
        }
        std::string libraryName = argv[2];
        LibraryManager::install(libraryName);
    } 
    else if (command == "remove") {
        if (argc < 3) {
            std::cerr << "Usage: cppenv remove <library_name>\n";
            return 1;
        }
        std::string libraryName = argv[2];
        LibraryManager::remove(libraryName);
    } 
    else if (command == "update") {
        LibraryManager::updateAll();
    } 
    else {
        std::cerr << "Unknown command: " << command << "\n";
        return 1;
    }

    return 0;
}

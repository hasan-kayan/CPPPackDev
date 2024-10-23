#include "cppenv/LibraryManager.h"
#include "cppenv/CMakeManager.h"
#include <iostream>
#include <string>

void printUsage() {
    std::cout << "Usage: cppenv <command> [options]\n";
    std::cout << "Commands:\n";
    std::cout << "  install <library_name>   Install a library\n";
    std::cout << "  remove <library_name>    Remove a library\n";
    std::cout << "  update                  Update all libraries\n";
    std::cout << "  cmake add <library_name> Add a library to CMakeLists.txt\n";
    std::cout << "  cmake remove <library_name> Remove a library from CMakeLists.txt\n";
}

int main(int argc, char** argv) {
    if (argc < 2) {
        printUsage();
        return 1;
    }

    std::string command = argv[1];

    // Handle the install command
    if (command == "install") {
        if (argc < 3) {
            std::cerr << "Error: Missing library name for install.\n";
            printUsage();
            return 1;
        }
        std::string libraryName = argv[2];
        LibraryManager::install(libraryName);

        // Optionally add to CMakeLists.txt
        CMakeManager::addLibraryToCMake(libraryName);

    // Handle the remove command
    } else if (command == "remove") {
        if (argc < 3) {
            std::cerr << "Error: Missing library name for remove.\n";
            printUsage();
            return 1;
        }
        std::string libraryName = argv[2];
        LibraryManager::remove(libraryName);

        // Optionally remove from CMakeLists.txt
        CMakeManager::removeLibraryFromCMake(libraryName);

    // Handle the update command
    } else if (command == "update") {
        LibraryManager::updateAll();

    // Handle the CMake commands
    } else if (command == "cmake") {
        if (argc < 3) {
            std::cerr << "Error: Missing subcommand for cmake.\n";
            printUsage();
            return 1;
        }
        std::string subcommand = argv[2];
        if (subcommand == "add") {
            if (argc < 4) {
                std::cerr << "Error: Missing library name for cmake add.\n";
                return 1;
            }
            std::string libraryName = argv[3];
            CMakeManager::addLibraryToCMake(libraryName);
        } else if (subcommand == "remove") {
            if (argc < 4) {
                std::cerr << "Error: Missing library name for cmake remove.\n";
                return 1;
            }
            std::string libraryName = argv[3];
            CMakeManager::removeLibraryFromCMake(libraryName);
        } else {
            std::cerr << "Unknown cmake subcommand: " << subcommand << "\n";
            printUsage();
            return 1;
        }

    // Handle unknown commands
    } else {
        std::cerr << "Unknown command: " << command << "\n";
        printUsage();
        return 1;
    }

    return 0;
}

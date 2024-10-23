#ifndef CMAKEMANAGER_H
#define CMAKEMANAGER_H

#include <string>

class CMakeManager {
public:
    // Function to add a library to CMakeLists.txt
    static void addLibraryToCMake(const std::string& libraryName);

    // Function to remove a library from CMakeLists.txt
    static void removeLibraryFromCMake(const std::string& libraryName);
};

#endif // CMAKEMANAGER_H

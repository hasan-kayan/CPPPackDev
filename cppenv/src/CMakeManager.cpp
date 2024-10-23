#include "cppenv/CMakeManager.h"
#include <fstream>
#include <iostream>

void CMakeManager::addLibraryToCMake(const std::string& libraryName) {
    std::ofstream cmakeFile("CMakeLists.txt", std::ios::app);
    if (cmakeFile.is_open()) {
        cmakeFile << "\n# Added by cppenv\n";
        cmakeFile << "include_directories(libs/" << libraryName << "/include)\n";
        cmakeFile << "link_directories(libs/" << libraryName << "/lib)\n";
        cmakeFile << "target_link_libraries(your_project " << libraryName << ")\n";
        cmakeFile.close();
        std::cout << "Added " << libraryName << " to CMakeLists.txt\n";
    } else {
        std::cerr << "Unable to open CMakeLists.txt\n";
    }
}

void CMakeManager::removeLibraryFromCMake(const std::string& libraryName) {
    std::cout << "Remove logic to be implemented for " << libraryName << "\n";
    // Logic for removing the library from CMakeLists.txt
}

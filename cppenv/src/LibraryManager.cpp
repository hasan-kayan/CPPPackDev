#include "cppenv/LibraryManager.h"
#include <iostream>
#include <filesystem>
#include <fstream>

namespace fs = std::filesystem;

void LibraryManager::install(const std::string& libraryName) {
    std::cout << "Installing library: " << libraryName << std::endl;
    
    // Simulate fetching the library (e.g., from GitHub)
    std::string libraryPath = "libs/" + libraryName;
    
    // Create the directory for the library
    fs::create_directories(libraryPath + "/include");
    fs::create_directories(libraryPath + "/lib");

    // Simulate downloading header and library files
    std::ofstream(libraryPath + "/include/" + libraryName + ".h") << "// Header for " << libraryName;
    std::ofstream(libraryPath + "/lib/" + libraryName + ".a") << "// Static library for " << libraryName;
    
    std::cout << "Library " << libraryName << " installed successfully.\n";
}

void LibraryManager::remove(const std::string& libraryName) {
    std::cout << "Removing library: " << libraryName << std::endl;
    
    std::string libraryPath = "libs/" + libraryName;
    
    if (fs::exists(libraryPath)) {
        fs::remove_all(libraryPath);
        std::cout << "Library " << libraryName << " removed.\n";
    } else {
        std::cout << "Library " << libraryName << " not found.\n";
    }
}

void LibraryManager::updateAll() {
    std::cout << "Updating all libraries...\n";
    // Logic for updating libraries can be implemented here
}

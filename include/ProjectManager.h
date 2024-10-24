#ifndef PROJECT_MANAGER_H
#define PROJECT_MANAGER_H

#include <iostream>
#include <filesystem>
#include <fstream>
#include <string>
#include <cstdlib>
#include <vector>

namespace fs = std::filesystem;

class ProjectManager {
public:
    void createDirectoryStructure(const std::string& projectName);
    void installLibrary(const std::string& projectPath, const std::string& libName);
    void parseCommand(int argc, char* argv[]);

private:
    void copyLibraryFiles(const std::string& libName, const std::string& projectPath);
    void updateCMakeLists(const std::string& projectPath, const std::string& libName);
    void installLibraryViaApt(const std::string& libName);
};

#endif // PROJECT_MANAGER_H

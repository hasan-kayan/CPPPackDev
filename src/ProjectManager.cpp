#include "../include/ProjectManager.h"

// Function to create the directory structure
void ProjectManager::createDirectoryStructure(const std::string& projectName) {
    fs::create_directory(projectName);
    fs::create_directory(projectName + "/src");
    fs::create_directory(projectName + "/include");
    fs::create_directory(projectName + "/libs");
    fs::create_directory(projectName + "/build");
    
    // Create a basic README.md
    std::ofstream readme(projectName + "/README.md");
    readme << "# " << projectName << std::endl;
    readme.close();

    // Create a basic CMakeLists.txt
    std::ofstream cmake(projectName + "/CMakeLists.txt");
    cmake << "cmake_minimum_required(VERSION 3.10)\n";
    cmake << "project(" << projectName << ")\n\n";
    cmake << "set(CMAKE_CXX_STANDARD 17)\n";
    cmake << "include_directories(include)\n";
    cmake << "add_executable(" << projectName << " src/main.cpp)\n";
    cmake << "target_link_libraries(" << projectName << " PRIVATE ${CMAKE_SOURCE_DIR}/libs)\n";
    cmake.close();

    // Create a main.cpp with a simple template
    std::ofstream mainFile(projectName + "/src/main.cpp");
    mainFile << "#include <iostream>\n\n";
    mainFile << "int main() {\n";
    mainFile << "    std::cout << \"Hello, " << projectName << "!\" << std::endl;\n";
    mainFile << "    return 0;\n";
    mainFile << "}\n";
    mainFile.close();
}

// Function to copy library files from system to project libs folder
void ProjectManager::copyLibraryFiles(const std::string& libName, const std::string& projectPath) {
    // Example paths (modify according to your system's library paths)
    std::vector<std::string> headers = {
        "/usr/include/boost",          // Adjust to the actual path for Boost headers
        "/usr/local/include/boost"
    };

    std::string libsFolder = projectPath + "/libs/" + libName;

    for (const auto& headerPath : headers) {
        for (const auto& entry : fs::directory_iterator(headerPath)) {
            if (entry.is_regular_file()) {
                fs::copy(entry.path(), libsFolder + "/" + entry.path().filename().string());
            }
        }
    }
}

// Function to update CMakeLists.txt to include the new library
void ProjectManager::updateCMakeLists(const std::string& projectPath, const std::string& libName) {
    std::string cmakeFile = projectPath + "/CMakeLists.txt";
    std::ofstream cmakeOut;
    cmakeOut.open(cmakeFile, std::ios::app); // Open in append mode

    if (cmakeOut.is_open()) {
        cmakeOut << "\n# Include and link the " << libName << " library\n";
        cmakeOut << "add_subdirectory(libs/" << libName << ")\n";
        cmakeOut << "include_directories(libs/" << libName << ")\n";
        cmakeOut << "target_link_libraries(${PROJECT_NAME} PRIVATE " << libName << ")\n";
        cmakeOut.close();
    } else {
        std::cerr << "Error: Could not open CMakeLists.txt" << std::endl;
    }
}

// Function to handle library installation from apt
void ProjectManager::installLibraryViaApt(const std::string& libName) {
    std::cout << "Installing library " << libName << " via apt..." << std::endl;
    std::string command = "sudo apt install -y " + libName;
    int result = system(command.c_str());

    if (result == 0) {
        std::cout << "Library " << libName << " installed successfully." << std::endl;
    } else {
        std::cerr << "Failed to install library " << libName << "." << std::endl;
    }
}

// Function to handle installation of libraries into the project
void ProjectManager::installLibrary(const std::string& projectPath, const std::string& libName) {
    std::string libsFolder = projectPath + "/libs";
    std::string libPath = libsFolder + "/" + libName;

    // Create libs folder if it doesn't exist
    if (!fs::exists(libsFolder)) {
        fs::create_directory(libsFolder);
    }

    // Always install the library using apt
    installLibraryViaApt(libName);

    // Copy the library files to the project
    copyLibraryFiles(libName, projectPath);
    updateCMakeLists(projectPath, libName);
}

// Parse the command and create the project or install a library
void ProjectManager::parseCommand(int argc, char* argv[]) {
    if (argc >= 3 && std::string(argv[1]) == "create-project") {
        std::string projectName = argv[2];
        std::cout << "Creating project: " << projectName << std::endl;
        createDirectoryStructure(projectName);

        // Simulate downloading required libraries
        copyLibraryFiles("example-lib", projectName); // Adjust as needed

        std::cout << "Project " << projectName << " created successfully." << std::endl;
    } 
    else if (argc >= 4 && std::string(argv[1]) == "install-lib") {
        std::string projectPath = argv[2];
        std::string libraryName = argv[3];
        std::cout << "Installing library: " << libraryName << " in project " << projectPath << std::endl;
        installLibrary(projectPath, libraryName);
    } 
    else {
        std::cerr << "Invalid command. Usage:\n";
        std::cerr << "  cpp-dev create-project <project-name>\n";
        std::cerr << "  cpp-dev install-lib <project-path> <library-name>\n";
    }
}

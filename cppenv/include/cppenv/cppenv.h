#ifndef CPPENV_H
#define CPPENV_H

#include <string>

class CppEnv {
public:
    // Function to initialize the environment
    static void init();

    // Function to install a library
    static void installLibrary(const std::string& libraryName);

    // Function to remove a library
    static void removeLibrary(const std::string& libraryName);
};

#endif // CPPENV_H

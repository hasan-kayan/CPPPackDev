#ifndef LIBRARYMANAGER_H
#define LIBRARYMANAGER_H

#include <string>

class LibraryManager {
public:
    static void install(const std::string& libraryName);
    static void remove(const std::string& libraryName);
    static void updateAll();
};

#endif // LIBRARYMANAGER_H

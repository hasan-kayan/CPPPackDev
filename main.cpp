#include "./include/ProjectManager.h"

int main(int argc, char* argv[]) {
    ProjectManager pm;
    pm.parseCommand(argc, argv);
    return 0;
}

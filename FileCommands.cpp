#include "FileCommands.hpp"
#include "Filesystem.hpp"

#include <iostream>
#include <ostream>

void CommandCd::doCommand(const std::vector<std::string> &in) {
    std::cout << "cd " << std::endl;
}

void CommandLs::doCommand(const std::vector<std::string> &in) {
    std::cout << "ls " << std::endl;
}

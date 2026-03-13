#pragma once

#include "Filesystem.hpp"

class System {
public:
    Filesystem filesystem = Filesystem();
    CommandLine cl = CommandLine(); // root); for future implementation
    Parser pr = Parser();
};
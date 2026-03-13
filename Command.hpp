#pragma once

#include <string>
#include <vector>
#include <array>

#include "Filesystem.hpp"

class Command {
protected:
    std::string id;

public:
    Command(const std::string& id);

    virtual void doCommand(const std::vector<std::string>& in);

    std::string getId();
};

class CommandLine {
public:
    User* user;
    std::array<Command*, 2> commandList;

    CommandLine();// User* user); // for future implementation

    void findCommand(std::vector<std::string> in);

    std::string terminal();
};

class Parser {
public:
    std::vector<std::string> parseCommand(const std::string& in);
};
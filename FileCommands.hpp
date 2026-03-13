#pragma once

#include "Command.hpp"

class CommandLs : public Command {
public:
    CommandLs() : Command("ls") {};

    void doCommand(const std::vector<std::string>& in) override;
};

class CommandCd : public Command {
public:
    CommandCd() : Command("cd") {};

    void doCommand(const std::vector<std::string>& in) override;
};
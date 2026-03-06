#include "Command.hpp"

Command::Command(const int& id) {
    this->id = id;
}

void Command::doCommand(const std::vector<std::string>& in) {}

std::string Command::getId() {
    return id;
}
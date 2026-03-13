#include <iostream>
#include <iterator>
#include <vector>
#include <sstream>

#include "Command.hpp"
#include "FileCommands.hpp"

Command::Command(const std::string& id) {
    this->id = id;
}

void Command::doCommand(const std::vector<std::string>& in) {}

std::string Command::getId() {
    return id;
}

CommandLine::CommandLine() : commandList({ //User* user) : commandList({ // for future implementation
    new CommandCd(),
    new CommandLs(),
}) {
    this->user = user;
}

void CommandLine::findCommand(const std::vector<std::string> in) {
    for (int i = 0; i < commandList.size(); i++) {
        if (in[0] == commandList[i]->getId()) {
            commandList[i]->doCommand(in);
        }
    }
}

std::string CommandLine::terminal() {
    std::string value;
    std::cout << "> ";
    std::cin >> value;
    return value;
}

std::vector<std::string> Parser::parseCommand(const std::string& in) { // parses a single string command into tokenised command
    // parsing
    std::istringstream iss(in);
    std::vector<std::string> out = {
        std::istream_iterator<std::string>{iss},
        std::istream_iterator<std::string>{}};

    return out;
}
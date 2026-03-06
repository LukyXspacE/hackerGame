#include <iostream>
#include <iterator>
#include <vector>
#include <sstream>

#include "Command.hpp"

class Parser {
private:
    std::vector<Command> commandList;

public:
    std::vector<std::string> parseCommand(const std::string& in) { // parses a single string command into tokenised command
        // parsing
        std::istringstream iss(in);
        std::vector<std::string> out = {
            std::istream_iterator<std::string>{iss},
            std::istream_iterator<std::string>{}};

        // forwarding command
        for (int i = 0; i < commandList.size(); ++i) {
            if (commandList[i].getId() == out[0]) {
                commandList[i].doCommand(out);
            }
        }

        return out;
    }
};


int main() {

    std::string s = "hello world . pls split it right";

    Parser parser;
    std::vector<std::string> v = parser.parseCommand(s);

    for (int i = 0; i < v.size(); i++) {
        std::cout << v[i] << ";" << std::endl;
    }
    return 0;
}
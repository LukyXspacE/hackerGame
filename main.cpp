#include <iostream>
#include <iterator>
#include <vector>
#include <sstream>

class Command {
protected:
    std::string id;

public:
    Command(const int& id) {
        this->id = id;
    }

    void doCommand(const std::vector<std::string>& in) {}
};

class Parser {
private:
    std::vector<Command> commandList;

public:
    std::vector<std::string> parseCommand(const std::string& in) {
        std::istringstream iss(in);
        return {
            std::istream_iterator<std::string>{iss},
            std::istream_iterator<std::string>{}};
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
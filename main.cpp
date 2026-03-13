#include <iostream>


#include "Command.hpp"
#include "Filesystem.hpp"

int main() {

    // ParserDemo //////////////////////////////////////////////////////////////////////////////////////////////////////
    //
    // std::string s = "hello world . pls split it right";
    //
    // Parser parser;
    // std::vector<std::string> v = parser.parseCommand(s);
    //
    // for (int i = 0; i < v.size(); i++) {
    //     std::cout << v[i] << ";" << std::endl;
    // }

    // Filesystem Demo /////////////////////////////////////////////////////////////////////////////////////////////////
    //
    // Filesystem f = Filesystem();
    // f.createFolder(0,"home");
    // f.createFolder(0,"systemFixed");
    // std::cout << f.users[0].ls();
    //
    // f.cd(0, "home");
    // f.createFolder(0,"usr");
    // std::cout << f.users[0].ls();

    // Command Demo ////////////////////////////////////////////////////////////////////////////////////////////////////
    //
    // User root = User("root"); // for future implementation
    CommandLine cl = CommandLine(); // root); for future implementation
    Parser pr = Parser();
    while (true) {
        cl.findCommand(pr.parseCommand(cl.terminal()));
    }

    return 0;
}
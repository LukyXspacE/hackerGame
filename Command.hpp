#pragma once

#include <string>
#include <vector>

class Command {
protected:
    std::string id;

public:
    Command(const int& id);

    void doCommand(const std::vector<std::string>& in);

    std::string getId();
};
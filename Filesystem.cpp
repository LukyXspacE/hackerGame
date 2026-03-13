#include "Filesystem.hpp"

FileNode::FileNode(std::string name) : name(name) {}

void FileNode::addChild(FileNode child) {
    children.push_back(child);
}

std::string User::ls() {
    std::string returnValue = "";

    for (int i = 0; i < position->children.size(); i++) {
        returnValue += position->children[i].name + "\n";
    }

    return returnValue;
}

Filesystem::Filesystem() : root("root") {
    User u;
    users.push_back(u);
    users[0].name = "root";
    users[0].position = &root;
}

void Filesystem::createFolder(int userIndex, std::string name) {
    users[userIndex].position->addChild(FileNode(name));
}

void Filesystem::cd(int userIndex, std::string cdValue) {
    for (int i = 0; i < users[userIndex].position->children.size(); i++) {

        FileNode current = users[userIndex].position->children[i];

        if (current.name == cdValue) {
            *users[userIndex].position = current;
            i = users[userIndex].position->children.size() + 1;
        }
    }
}
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
    user.position = &root;
}

void Filesystem::createFolder(std::string name) {
    user.position->addChild(FileNode(name));
}
#include "Filesystem.hpp"

FileNode::FileNode(std::string name) : name(name) {}

void FileNode::addChild(FileNode child) {
    children->push_back(child);
}

Filesystem::Filesystem() : root("root") {
    user = User();
}

void Filesystem::createFolder(std::string name) {
    user.position->addChild(FileNode(name));
}
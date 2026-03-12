#pragma once

#include <vector>
#include <string>

class FileNode {
public:
    std::string name;
    FileNode* parent;
    std::vector<FileNode> children;

    FileNode(std::string name);

    void addChild(FileNode child);
};

class User {
public:
    std::string name;
    FileNode* position;

    std::string ls();
};

class Filesystem {
public:
    FileNode root;
    std::vector<FileNode> listOfNodes;
    User user;

    Filesystem();

    void createFolder(std::string name);
    
};
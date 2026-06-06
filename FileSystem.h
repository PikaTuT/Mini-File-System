#ifndef FILESYSTEM_H
#define FILESYSTEM_H

#include <iostream>
#include <string>
#include <fstream>
#include "Folder.h"
#include "File.h"

using namespace std;

class FileSystem {
private:
    Folder* root;
    Folder* current;

public:
    FileSystem(string filename);
    ~FileSystem();
    void run();

    // helpers
    void loadFromFile(string filename);
    Folder* findFolder(string path);
    bool isDuplicateFolder(string name);
    bool isDuplicateFile(string name);
    string getCurrentPath();

    // menu operations
    void createFolder();
    void createFile();
    void displayCurrentFolder();
    void displayFullTree();
    void searchFile();
    void enterFolder();
    void goBack();
    void renameFile();
    void removeFile();
    void renameFolder();
    void removeFolder();
    void showCurrentPath();
};

#endif
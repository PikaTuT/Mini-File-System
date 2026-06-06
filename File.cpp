#include "File.h"

using namespace std; // Drops the need for std:: here!

File::File(string name, string extension) 
    : name(name), extension(extension) {}

string File::getName() const {
    return name;
}

string File::getExtension() const {
    return extension;
}

string File::getFullName() const {
    return name + "." + extension;
}
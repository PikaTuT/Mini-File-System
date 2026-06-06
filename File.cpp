#include "File.h"

using namespace std; // Drops the need for std:: here!

File::File(string name, string extension) 
    : name(name), extension(extension) {}

string File::getFileFullName() const {
    return name + "." + extension;
}
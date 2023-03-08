#include<stdio.h>
#include <fstream>
#include <iostream>
#include <unistd.h>
#include <stdio.h>
#include <limits.h>
#include <cstdlib>
#include <dirent.h>
#include <fstream>
using namespace std;
int main()
{
    std::string option;
    char cwd[PATH_MAX];
    if (getcwd(cwd, sizeof(cwd)) != NULL) {
        printf(" _ %s", cwd);
    } else {
        perror("getcwd() error");
        return 1;
    }
    std::string Username = getlogin();
    std::cout << "\n(__" << Username << "___> ";
    std::getline(std::cin >> std::ws, option);
    ofstream myFile_Handler;
    // File Open
    myFile_Handler.open(option);

    std::string option1;
    if (getcwd(cwd, sizeof(cwd)) != NULL) {
        printf(" _ %s", cwd);
    } else {
        perror("getcwd() error");
        return 1;
    }
    getlogin();
    std::cout << "\n(__" << Username << "___> ";
    std::getline(std::cin >> std::ws, option1);
    // Write to the file
    myFile_Handler << option1;

    // File Close
    myFile_Handler.close();
    return 0;
}
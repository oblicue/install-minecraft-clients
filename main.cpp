#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;
int main(){
    char movepath[50];
    char newpath[] = "\%homedrive%\%homepath%\\AppData\\Roaming\\.minecraft\\versions";
    char cmd[500];
    cout << "What's the path of your jar's parent folder: ";
    cin >> movepath;
    cout << "Moving file...\n"; 
    strcpy(cmd,"move \"");
    strcat(cmd,movepath);
    strcat(cmd,"\" \"");
    strcat(cmd,newpath);
    strcat(cmd,"\"");
    cout << "Running command to move folder.\n";
    system(cmd);
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <string.h>
#include <sys/stat.h>

void readDir(char *dir) {
    struct dirent *dirent;
    DIR *parentDir;
    parentDir = opendir(dir);
    
    if (parentDir == NULL) {
        printf ("Error opening directory '%s'\n", dir);
        exit (-1);
    }
    
    while((dirent = readdir(parentDir)) != NULL){

        if (strcmp(dirent->d_name, ".") == 0 || strcmp(dirent->d_name, "..") == 0) {
            continue;
        }

        char path[1024];
        snprintf(path, sizeof(path), "%s/%s", dir, dirent->d_name);

        struct stat entry_stat;
        if (stat(path, &entry_stat) == 0 && S_ISDIR(entry_stat.st_mode)) {
            printf("Directory: %s\n", path);
            readDir(path);
        } else {
            printf("File: %s\n", path);
        }

        
    }
    closedir (parentDir);
}
int main (int argc, char **argv) {

    if (argc < 2) {
        printf ("Usage: %s <dirname>\n", argv[0]);
        exit(-1);
    }

    readDir(argv[1]);
    
    
    return 0;
}

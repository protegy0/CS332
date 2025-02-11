#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

#define BUFFSIZE 4096


int main(int argc, char* argv[]) {

    if (argc != 3) {
        printf("Usage: %s <source_filename> <destination_filename>\n", argv[0]);
        exit(-1);
    }


    if (strcmp(argv[1], argv[2]) == 0) {
        printf("Cannot append to same file!\nUsage: %s <source_filename> <destination_filename>\n", argv[0]);
        exit(-1);
    }

    char buffer[BUFFSIZE];
    long int n;
    long int bytesWritten;
    

    int secondFile = open(argv[2], O_RDONLY);
    int firstFile = open(argv[1], O_WRONLY | O_APPEND);


    if (firstFile == -1 || secondFile == -1) {
        printf("Error with file open\n");
        exit(-1);
    }
    char newLine = '\n';
    long int newLineInsert = write(firstFile, &newLine, 1);
    if (newLineInsert == -1) {
        printf("Error writing to file\n");
        exit(-1);
    }
    while ((n = read(secondFile, buffer, BUFFSIZE)) > 0) {
        buffer[n] = '\0';
        bytesWritten = write(firstFile, buffer, n);
    }
    if (n < 0) {
        printf("Error reading input file\n");
        exit(-1);
    }
    if (bytesWritten == -1) {
        printf("Error writing to file\n");
        exit(-1);
    }

    

    

    close(firstFile);
    close(secondFile);





    return 0;
}
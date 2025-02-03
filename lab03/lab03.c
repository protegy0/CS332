#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


char* readString() {
    char temporary[100];

    printf("Enter a string:\n");

    scanf("%99s", temporary);

    int length = strlen(temporary);

    char* str = malloc((length + 1) * sizeof(char));

    if (str == NULL) {
        printf("Memory allocation failed\n");
        exit(-1);
    }

    strcpy(str, temporary);

    return str;
}

void sortString(char* str) {
    char temp;
    int currLoc;
    int len = strlen(str);
    for (int i = 1; i < len; i++) {
        currLoc = i;
        while (currLoc > 0 && tolower(*(str + (currLoc - 1))) > tolower(*(str + (currLoc)))) {
            temp = *(str + currLoc);
            *(str + currLoc) = *(str + (currLoc - 1));
            *(str + (currLoc - 1)) = temp;
            currLoc--;
        }
    }
}

void displaySortedString(char* str) {
    sortString(str);
    printf("Sorted string: %s\n", str);
}


int main() {

    char* str = readString();

    displaySortedString(str);

    free(str);

    return 0;
}
# CS332
# Lab 3


# Compilation Instructions

If you're using a make file:
```bash
make # this will compile all the files
make run # this will run all the files

make run ARGS="<your args here>" # this will run the files with your args

make run ARGS="a.txt b.txt" # this will run the executable with the arguments of a.txt b.txt
```

If you're not using a make file:
```bash
get -o <executable name> <filename> # this will compile the filename and return an executable with the executable name

gcc -o lab03 lab03.c # this will compile lab01.c and output an executable called lab01
```

# My Files
## lab03.c

### char* readString()

This function has no input, and returns a pointer to the beginning of a character array. It creates temporary memory for a string, and then prompts the user to enter a string. After the string has been inputted, it dynamically allocates memory that fits the length of the inputted string, and then returns a pointer to that new memory location.

### void sortString(char* str)

This function returns nothing, but takes in a pointer to a character array as input. It sorts the given character array alphanumerically using a modified version of insertion sort.

### void displaySortedString(char* str)

This function returns nothing. It only asks for the pointer to a character array, sorts it using sortString(), and prints the sorted string.

### main()

This function prompts the user for a string and creates it using readString(). It then sorts and displays said string using displaySortedString(). Finally, it frees the dynamically allocated memory and then returns.



# References

https://en.cppreference.com/w/c/string/byte/tolower
For the toLower() func, in order to ignore case when sorting.

https://en.cppreference.com/w/c/string/byte/strcpy
For the strcpy() func.

https://en.cppreference.com/w/c/string/byte/strlen
For the strlen() func.




#GitHub
https://github.com/protegy0/CS332

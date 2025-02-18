# CS332
# Lab 5


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

gcc -o lab05 lab05.c # this will compile lab04.c and output an executable called lab04
```

# My Files
## lab05.c

### main()

This function uses the input from the command line argument in order to choose which directory to traverse

### readDir(char *dir)

This function is an extension of the readdir file, moved into a separate function in order to be called recursively. Traverses all sub directories displaying paths to them as well as paths to all files in those directories.



# References

https://www.geeksforgeeks.org/snprintf-c-library/
https://pubs.opengroup.org/onlinepubs/7908799/xsh/sysstat.h.html




#GitHub
https://github.com/protegy0/CS332

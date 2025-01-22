# CS332
# Lab 1


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

gcc -o lab01 lab01.c # this will compile lab01.c and output an executable called lab01
```

# My Files
## lab01.c

### main()

This function asks the user for a number, and determines if that given number is even or odd

# References

https://cplusplus.com/reference/cstdio/scanf/
Used to understand scanf function

#GitHub
https://github.com/protegy0/CS332

# CS332
# Lab 2


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

gcc -o lab02 lab02.c # this will compile lab01.c and output an executable called lab01
```

# My Files
## lab02.c

### insertionSort(int *arr, int size)

This function asks for a pointer to an array, and the size of said array. It then sorts the array from least to greatest using the insertion sort algorithm.

### main()

This function prompts the user for ten numbers to input into an array, and then prints the unsorted array and then the sorted array using insertion sort.

# References


#GitHub
https://github.com/protegy0/CS332

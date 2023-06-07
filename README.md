# Row-Columnn C Speed Test

In row-major order, consecutive elements in a row are stored adjacently in memory, while in column-major order, consecutive elements in a column are stored adjacently. These differences in memory layout can affect how data is fetched from memory and impact cache utilization.

Compiling [gcc] (not sure why you can't do it):
    gcc -Wall -Wextra -std=c2x -pedantic main.c -o array-traversal

Command-Line Usage:
    array-traversal [rows] [cols] [minVal maxVal]

OPTIONS
    rows       : The number of rows in the array (positive integer, default: 3)
    cols       : The number of columns in the array (positive integer, default: 4)
    minVal     : The minimum value for array initialization (integer, default: 0)
    maxVal     : The maximum value for array initialization (integer, default: 100)

USAGE
    To run the program with default values (init range):
        $ array-traversal rows cols

    To specify array dimensions and initialization range:
        $ array-traversal rows cols [minVal maxVal]

EXAMPLES
    Run the program with default values:
        $ array-traversal rows cols

    Run the program with a 5x5 array and custom initialization range:
        $ array-traversal 5 5 10 50

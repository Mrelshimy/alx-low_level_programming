#!/usr/bin/python3
"""island perimeter module"""


def island_perimeter(grid):
    """Island perimeter function"""

    counter = 0

    for i in grid:
        for j in i:
            if j == 1:
                counter += 1
    if counter == 0:
        return 0

    return (counter * 2) + 2

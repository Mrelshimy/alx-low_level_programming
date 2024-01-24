#!usr/bin/python3
"""island perimeter module"""


def island_perimeter(grid):
    """Island perimeter function"""

    counter = 0

    for i in grid:
        for j in i:
            if j == 1:
                counter += 1
    return counter + 2

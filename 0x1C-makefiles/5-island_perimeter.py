#!/usr/bin/python3
"""island perimeter module"""


def island_perimeter(grid):
    """Island_perimeter function"""
    count = 0

    for i in range(1, len(grid)):
        for j in range(1, len(grid[i])):
            if grid[i][j] == 1:
                count += 4
                if grid[i - 1][j] == 1:
                    count -= 2
                if grid[i][j - 1] == 1:
                    count -= 2

    return count

#!/usr/bin/python3
"""
Island perimeter module
"""


def island_perimeter(grid):
    """this is the island perimeter function"""
    count = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                count += 4
                if j > 0 and grid[i][j - 1] == 1:
                    count -= 2
                if i > 0 and grid[i - 1][j] == 1:
                    count -= 2
    return count

#!/usr/bin/python3
"""Defines an island perimeter measuring function."""


def island_perimeter(grid):
    """
    Return the perimiter of an island in a grid which 
    represents water by 0 and land by 1.
    """
    width = len(grid[0])
    height = len(grid)
    sides = 0
    land = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                land += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    sides += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    sides += 1
    return land * 4 - sides * 2

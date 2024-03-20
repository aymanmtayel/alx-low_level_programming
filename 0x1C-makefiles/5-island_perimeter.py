#!/usr/bin/python3
"""Island calculation module"""

def island_perimeter(grid):
    """function that returns the perimeter of the island escribed in grid
    Args:
            grid (matrix of 0 and 1) represents the grid 0 and 1
            where 0 means water and 1 means land
    Returns:
            the premiter of the island
    """
    perimeter = 0
    if not grid:
        return 0
    for i, lth in enumerate(grid):
        for j, k in enumerate(lth):
            if k == 1:
                perimeter += 4
                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 2
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 2
    return perimeter

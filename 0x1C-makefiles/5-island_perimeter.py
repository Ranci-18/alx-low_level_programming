#!/usr/bin/python3
"""module defining a function"""


def island_perimeter(grid):
    """function calculates the perimeter of an island in grid
    cells are squares of size 1
    """
    if len(grid) > 100 or len(grid[0]) > 100:
        return

    perimeter = 0
    rows = len(grid)
    columns = len(grid[0])
    for i in range(rows):
        for j in range(columns):
            element = grid[i][j]
            if element == 1:
                island = element
                perimeter += 4
                if j + 1 < columns and grid[i][j+1] == 1:
                    perimeter -= 2
                if i + 1 < rows and grid[i+1][j] == 1:
                    perimeter -= 2
            else:
                pass
    return perimeter

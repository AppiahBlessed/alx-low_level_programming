#!/usr/bin/python3
"""The fucntion calculates the perimeter of the island"""


def island_perimeter(grid):
    """
    The fucntion calculates the perimeter of the island described in the grid.

     Args:
             grid (list): A list of list of integers representing an island.
    :return: Retursn the perimeter of the island
    """

    perimeter = 0

    for row in range(len(grid)):
        for col in range(len(grid[0])):
            if grid[row][col] == 1:
                perimeter += 4

                if row > 0 and grid[row - 1][col] == 1:
                    perimeter -= 2
                if col > 0 and grid[row][col - 1] == 1:
                    perimeter -= 2

    return perimeter

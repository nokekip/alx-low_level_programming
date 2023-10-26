#!/usr/bin/python3
"""Defines an island perimeter measuring function."""

def island_perimeter(grid):
    """
    Calculate the perimeter of the island described in the grid.

    :param grid: A list of lists of integers where 0 represents a water zone and 1 represents a land zone.
    :return: The perimeter of the island.
    """
    if not grid:
        return 0

    def count_neighbors(row, col):
        neighbors = 0
        if row > 0 and grid[row - 1][col] == 1:
            neighbors += 1
        if row < len(grid) - 1 and grid[row + 1][col] == 1:
            neighbors += 1
        if col > 0 and grid[row][col - 1] == 1:
            neighbors += 1
        if col < len(grid[0]) - 1 and grid[row][col + 1] == 1:
            neighbors += 1
        return neighbors

    perimeter = 0
    for row in range(len(grid)):
        for col in range(len(grid[0])):
            if grid[row][col] == 1:
                neighbors = count_neighbors(row, col)
                perimeter += 4 - neighbors

    return perimeter
#!/usr/bin/python3
""" Returns the parimeter of an island in grid """


def island_perimeter(grid):
    """ Returns parimeter of island, with 1 == land and 0 == width """

    parimeter = 0
    for line in range(len(grid)):
        for square in range(len(grid[line])):
            if grid[line][square] == 1:
                parimeter += 4
                if line is not 0:
                    if grid[line - 1][square] == 1:
                        parimeter -= 1
                if line < len(grid) - 1:
                    if grid[line + 1][square] == 1:
                        parimeter -= 1
                if square is not 0:
                    if grid[line][square - 1] == 1:
                        parimeter -= 1
                if square < len(grid[line]):
                    if grid[line][square + 1] == 1:
                        parimeter -= 1
    return parimeter

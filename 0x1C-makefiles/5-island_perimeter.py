#!/usr/bin/python3
""" Returns the parimeter of an island in grid """


def island_perimeter(grid):
    """ Returns parimeter of island, with 1 == land and 0 == width """

    parimeter = 0
    height = 0
    for line in grid:
        ischeck = 0
        width = 0
        for square in line:
            if square == 1:
                width += 1
                ischeck = 1
        if ischeck == 1:
            height += 1
        parimeter += width + ischeck

    parimeter += height

    return parimeter

#!/usr/bin/python3
"""
Module for a grid representing an island
"""


def island_perimeter(grid):
    """
    Returns the perimeter of the island described in grid
    Args:
        grid: list of list of integers, where
            0 represents a water zone
            1 represents a land zone
            One cell is a square with side length 1
            Grid cells are connected horizontally/vertically (not diagonally).
            Grid is rectangular, width and height don’t exceed 100
    """
    dim=[]
    for row in grid:
        for col in row:
            if grid[row][col]:
                num += 1
            dim.append(num)
    return 2*(max(dim) + len(dim))

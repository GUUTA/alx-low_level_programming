#!/usr/bin/python3
""" Program that discover the perimeter of an island depends on grid """


def island_perimeter(grid):
    """ returns the perimeter of the island described in grid
    examp: 0 0 0
           0 1 0
           0 0 0
    Res: this will return 4, because One cell is a square with side length 1,
    if side right/left of int 1 is shared by 0, we incremment the counter.
    Also, perimeter of rectangle is (2 * (widht + height))
    """
    perim = 0
    srow = len(grid)
    for row in range(srow):
        scol = len(grid[row])
        for col in range(scol):
            if grid[row][col] == 1:
                if (row == 0 or (grid[row - 1][col] != 1)):
                    perim += 1
                if (row == (srow - 1) or (row < srow - 1 and
                                          grid[row + 1][col] != 1)):
                    perim += 1
                if (col == 0 or (grid[row][col - 1] != 1)):
                    perim += 1
                if (col == (scol - 1) or (col < scol - 1 and
                                          grid[row][col + 1] != 1)):
                    perim += 1
    return (perim)

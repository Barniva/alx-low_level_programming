#!/usr/bin/python3
"""
5-main
"""


def island_perimeter(grid):
    """return a island's square"""
    ln = len(grid[1])
    llen = len(grid)
    square = 0
    for a in range(len(grid)):
        for b in range(len(grid[a])):
            if grid[a][b] == 1:
                if b < ln - 1:
                    # derecha
                    if grid[a][b + 1] == 0:
                        square += 1
                elif b == ln - 1:
                    square += 1
                if b > 0:
                    # izquierda
                    if grid[a][b - 1] == 0:
                        square += 1
                elif b == 0:
                    square += 1
                if a < llen - 1:
                    # abajo
                    if grid[a + 1][b] == 0:
                        square += 1
                elif a == llen - 1:
                    square += 1
                if a > 0:
                    # arriba
                    if grid[a - 1][b] == 0:
                        square += 1
                elif a == 0 or a == llen:
                    square += 1
    return square

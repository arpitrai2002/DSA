def blur_image(image, radius):
    import numpy as np
    from statistics import mean
    
    rows, cols = len(image), len(image[0])
    result = [[0] * cols for _ in range(rows)]
    
    def get_neighbors(i, j, radius):
        neighbors = []
        for di in range(-radius, radius + 1):
            for dj in range(-radius, radius + 1):
                ni, nj = i + di, j + dj
                if 0 <= ni < rows and 0 <= nj < cols and (di != 0 or dj != 0):
                    neighbors.append(image[ni][nj])
        return neighbors
    
    for i in range(rows):
        for j in range(cols):
            neighbors = get_neighbors(i, j, radius)
            if neighbors:
                mean_neighbors = mean(neighbors)
                result[i][j] = (image[i][j] + mean_neighbors) // 2
            else:
                result[i][j] = image[i][j]
    
    return result



def solution(operations):
    max_width = 0
    max_height = 0
    results = []

    for operation in operations:
        op_type, a, b = operation
        if op_type == 0:
            max_width = max(max_width, min(a, b))
            max_height = max(max_height, max(a, b))
        elif op_type == 1:
            can_fit = (a <= max_width and b <= max_height) or (b <= max_width and a <= max_height)
            results.append(can_fit)

    return results


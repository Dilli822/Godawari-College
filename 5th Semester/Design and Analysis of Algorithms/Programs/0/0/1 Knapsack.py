def knapsack(values, weights, W):
    n = len(values)
    
    # Create a 2D array to store the maximum value at each n and W
    dp = [[0 for _ in range(W + 1)] for _ in range(n + 1)]
    
    # Fill the dp table
    for i in range(1, n + 1):
        for w in range(1, W + 1):
            if weights[i - 1] <= w:
                dp[i][w] = max(dp[i - 1][w], values[i - 1] + dp[i - 1][w - weights[i - 1]])
            else:
                dp[i][w] = dp[i - 1][w]
    
    # The maximum value will be in dp[n][W]
    return dp[n][W]

# Example usage
weights = [3,4,6,5]
values = [2,3,1,4]
W = 8

max_value = knapsack(values, weights, W)
print(f"Maximum value in Knapsack: {max_value}")


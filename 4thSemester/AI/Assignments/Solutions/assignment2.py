
## QUESTION NO: 1  BFS
# Given a transportation network represented as
# a graph where nodes/state represent cities and edges 
# represent road links between the cities, implement a 
# function (using any high level language; preferably Python) 
# that performs a breadth-first search and return the path
# from starting city to the destination city, if there exist.
# Starting city: Biratnagar Destination city: Illam

from collections import deque

# Define state space as a dictionary of lists
graph = {
    # setting the biratnagar as the root node
    'Biratnagar': ['Rangeli', 'Dhankuta'],
    'Rangeli': ['Urlabari'],
    'Dhankuta': ['Bhojpur', 'Chainpur', 'Illam'],
    'Bhojpur': [],
    'Chainpur': ['Khandbari'],
    'Khandbari': [],
    'Urlabari': ['Shivasatakshi', 'Gauradaha'],
    'Gauradaha': [],
    'Shivasatakshi': ['Bhae', 'Suryo'],
    'Bhae': [],
    'Suryo': ['Illam'],
    'Illam': [],
}

# Define the start and goal state/nodes
start_node = 'Biratnagar'
goal_node = 'Illam'

# Create a queue for BFS
queue = deque([start_node])

# Create a set to keep track of visited nodes
visited = set([start_node])

# Create a dictionary to keep track of the parent node of each visited node
parents = {start_node: None}

# Perform BFS
while queue:
    # Get the next node from the queue
    current_node = queue.popleft()
    
    # Check if the current node is the goal node
    if current_node == goal_node:
        # We have found a path to the goal node, so exit the loop
        break
    
    # Explore the neighbors of the current node
    for neighbor in graph[current_node]:
        # Check if the neighbor has not been visited yet
        if neighbor not in visited:
            # Add the neighbor to the queue and mark it as visited
            queue.append(neighbor)
            visited.add(neighbor)
            # Set the parent of the neighbor to be the current node
            parents[neighbor] = current_node

# If we have found a path to the goal node, print the path
if goal_node in parents:
    # Follow the parent links from the goal node to the start node
    path = [goal_node]
    while path[-1] != start_node:
        path.append(parents[path[-1]])
    # Reverse the order of the nodes to get the path from start to goal
    path.reverse()
    print("Found a path from", start_node, "to", goal_node, ":")
    print("Goal Node is:", goal_node)
    print("Path is:", path)

else:
    print("Could not find a path from", start_node, "to", goal_node)
    print("Goal node:", goal_node, "doesnt exist")

print("Parent : Childrens",parents)

## QUESTION NO: 2   DFS
#  Suppose you have a family hierarchy: (Please use appropriate names 
# of for every nodes and you are free to restructure the hierarchy as per your family structure)
# Example:
# Great_grand _parents (root node)
# Grand parents (Great_grand _parents child)
# Parents (Grand parents child) You (Parents child)
# Uncle ( Grand parents child) Parents_Uncle (Great_grand _parents child)
# XYZ (Parents_Uncle child) ABC (Parents_Uncle child)
# Now based on your family hierarchy represented as a tree implement 
# a function (using any high level language; preferably Python) that performs a 
# depth-first search and return the path from node Great_grand_parents (root node) to node You (Parents_child).







## QUESTION NO: 3  GREEDY BEST FIRST SEARCH ALGORITHM 
#  Consider a the following search problem represented by a graph, where each node in the graph represents a state, 
# and each edge represents a possible transition between states. The goal is to find the path from the initial state 
# to the goal state using the Greedy Best-First Search algorithm. The search algorithm utilizes a heuristic function 
# to estimate the cost from each state to the goal.

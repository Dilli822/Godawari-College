''' This is an implementation of BFS (breadth-first search) algorithm
on a graph represented as a dictionary of lists in Python.
The algorithm starts from a given start node and tries
to find a path to a given goal node by exploring 
the graph in a breadth-first manner.

The first step is to initialize a queue with the start node 
and a set of visited nodes with the start node. 
We also create a dictionary to 
keep track of the parent node of each visited node, 
initialized with the start node as having no parent.

Next, we perform the BFS algorithm by iterating 
over the queue until it becomes empty.
In each iteration, we get the next node
from the queue and check if it is the goal node.
If it is, we exit the loop since we have found
a path to the goal node.

Otherwise, we explore the neighbors of the current node by iterating over the list of neighbors in the graph. 
For each neighbor, we check if it has not been visited yet. If it has not, we add it to the queue, mark it as visited, and set its parent node in the dictionary to be the current node.

If we have found a path to the goal node, we print the path by following the parent links from the goal node to the start node. 
We append each parent node to a list called path until we reach the start node. Then, we reverse the list to get the path from start to goal.

Finally, we print the dictionary of parents, which shows the parent node of each visited node in the graph. 
This can be useful for other algorithms that build on top of BFS, such as Dijkstra's shortest path algorithm.'''

#imports the deque class from the collections module in Python's standard library. A deque (short for "double-ended queue") 
#is a data structure that allows adding and removing elements from both ends in constant time O(1), 
#making it useful for implementing queues and stacks. In the context of graph traversal algorithms, a deque can be used as a queue to implement breadth-first search.

from collections import deque

# Define state space as a dictionary of lists
graph = {
    # setting the biratnagar as the root node
    'Biratnagar': ['Rangeli', 'Dhankuta'],
    'Rangeli': ['Urlabari'],
    'Dhankuta': ['Bhojpur', 'Chainpur'],
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
goal_node = 'Kathmandu'

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
# # Show the plot
# plt.show()
import networkx as nx
import matplotlib.pyplot as plt
from collections import deque

# Define the graph
graph = {
    'Biratnagar': ['Rangeli', 'Dhankuta'],
    'Rangeli': ['Urlabari'],
    'Dhankuta': ['Bhojpur', 'Chainpur', 'Illam'],
    'Urlabari': ['Shivasatakshi', 'Gauradaha'],
    'Bhojpur': [],
    'Chainpur': ['Khandbari'],
    'Illam': [],
    'Shivasatakshi': ['Bhae', 'Suryo'],
    'Gauradaha': [],
    'Khandbari': [],
    'Bhae': [],
    'Suryo': ['Illam'],
    
    # 'Biratnagar': ['Rangeli'],
    # 'Rangeli': ['Urlabari'],
    # 'Urlabari': [],

}

# Create a directed graph
G = nx.DiGraph()

# Add nodes and edges to the graph
for node, neighbors in graph.items():
    G.add_node(node)
    G.add_edges_from((node, neighbor) for neighbor in neighbors)

# Get BFS edges starting from Biratnagar
bfs_edges = list(nx.bfs_edges(G, source='Biratnagar'))

# Create a new graph from BFS edges
bfs_tree = nx.DiGraph(bfs_edges)

# Add all remaining edges to the BFS tree
for edge in G.edges():
    if edge not in bfs_tree.edges():
        bfs_tree.add_edge(edge[0], edge[1])

# Assign colors based on node attributes
colors = ['blue' if node == 'Biratnagar' else 'red' if node == 'Illam' else 'green' for node in bfs_tree.nodes()]

# Plot the graph with colored nodes
pos = nx.circular_layout(bfs_tree)  # Change the layout algorithm here
plt.figure(figsize=(10, 8))  # Adjust figure size
nx.draw(bfs_tree, pos, with_labels=True, node_size=1000, node_color=colors, font_size=10, font_color="black", font_weight="bold", arrowsize=20, connectionstyle='arc3,rad=0.1')

# Show the plot
plt.show()

#                     Biratnagar
#                    /          \
#               Rangeli      Dhankuta
#              /             /      \
#        Urlabari       Bhojpur  Chainpur
#       /     \                   /      \
# Shivasatakshi Gauradaha   Khandbari  Illam
#       /     \
#     Bhae   Suryo
#               \
#             Illam

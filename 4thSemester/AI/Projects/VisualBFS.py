import networkx as nx
import matplotlib.pyplot as plt
from collections import deque

# Define the graph
graph = {
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
    'Suryo': ['Illam']
}

# Create a directed graph
G = nx.DiGraph()

# Add nodes and edges to the graph
for node, neighbors in graph.items():
    G.add_node(node)
    G.add_edges_from((node, neighbor) for neighbor in neighbors)

# Create a BFS tree starting from Biratnagar
bfs_tree = nx.bfs_tree(G, source='Biratnagar')

# Assign colors based on node attributes
colors = ['blue' if node == 'Biratnagar' else 'red' if node == 'Illam' else 'green' for node in bfs_tree.nodes()]

# Plot the graph with colored nodes
pos = nx.circular_layout(bfs_tree)  # Change the layout algorithm here
plt.figure(figsize=(10, 8))  # Adjust figure size
nx.draw(bfs_tree, pos, with_labels=True, node_size=1000, node_color=colors, font_size=10, font_color="black", font_weight="bold", arrowsize=20, connectionstyle='arc3,rad=0.1')

# Show the plot
plt.show()

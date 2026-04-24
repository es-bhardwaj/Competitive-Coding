## Maze Solver
A lightweight C++ command-line tool that finds the shortest path between two points in a grid-based maze. It uses **Dijkstra's Algorithm** to handle pathfinding and supports 8-directional movement (horizontal, vertical, and diagonal).

## Project Structure
* `maze-solver.cpp`: Standalone C++ implementation for reference.
* `/web-implementation`: Web-based GUI built with HTML, CSS, and JavaScript.

## Features
* 8-Directional Movement 
* Customizable Grids
* Visual Output- Shortest Path between points

## Algorithm Logic
* **Dijkstra’s Algorithm**: Treats the grid as a weighted graph to find the absolute shortest path.
* **Min-Heap (Priority Queue)**: Optimizes the search by always exploring the node with the lowest cumulative cost first. 
* **Backtracking**: The final path is reconstructed by traversing "parent" pointers from the destination back to the source.

## Usage (web-implementation)
1.  Open `index.html` in a browser. Set grid size and click **Generate**.
2.  Choose a mode to draw walls, place the **Start (S)**, **End (E)**.
3.  Click **Solve Path** to visualize the Dijkstra traversal.

## Complexity Analysis
* **Time Complexity**: O((V + E) log V) <br>
V is the number of vertices / cells in the grid (rows x columns) <br>
E is the possible moves between cells. Since 8-directional movement is allowed, E nearly equals 8V <br>
The log V factor comes from the Min-Heap (Priority Queue) operations used to extract the minimum distance node.
* **Space Complexity**: O(V) <br>
We store a 2D distance array and a parent map, both proportional to the number of cells in the grid.

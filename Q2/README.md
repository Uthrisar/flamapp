# Circular Dependency Detector

![Dependency Graph Visualization](https://miro.medium.com/v2/resize:fit:720/format:webp/1*2okQF8QaF_B1j_5v9YJ4FQ.png)

A C++ implementation to detect circular dependencies in directed graphs using Depth-First Search (DFS).

## Table of Contents
- [Problem Description](#problem-description)
- [Algorithm](#algorithm)
- [Features](#features)
- [Requirements](#requirements)
- [Build & Run](#build--run)
- [Input Format](#input-format)
- [Output](#output)
- [Complexity Analysis](#complexity-analysis)
- [Examples](#examples)
- [Applications](#applications)
- [Limitations](#limitations)
- [Contributing](#contributing)
- [License](#license)

## Problem Description
This program detects whether a directed graph contains any circular dependencies (cycles). This is a common problem in:
- Software package dependencies
- Task scheduling systems
- Build systems
- Resource allocation systems

## Algorithm
The solution uses a modified DFS approach with:
- **Visited array**: Tracks permanently visited nodes
- **Recursion stack array**: Tracks nodes in the current DFS path
- Cycle detection when a node is encountered that's already in the recursion stack

## Features
- Efficient O(V+E) time complexity
- Handles disconnected graphs
- Clear true/false output
- Standard adjacency list representation
- Memory efficient implementation

## Requirements
- C++11 or later
- GNU g++ or compatible compiler
- Standard Template Library

## Build & Run
```bash
g++ -std=c++11 circular_dependency.cpp -o detector
./detector
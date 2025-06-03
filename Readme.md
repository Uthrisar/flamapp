# Repository Overview

This repository contains three main projects, each demonstrating a different algorithmic or architectural concept:

---

## 1. **ClimatePulse (WeatherTrack)**

A modern weather monitoring Android application that demonstrates clean architecture patterns and real-time atmospheric data visualization.

### 🔑 Key Features:
- Dynamic weather dashboard with live updates
- Predictive forecast models for 24-hour outlook
- Data persistence with automatic sync
- Multi-layer architecture (MVVM-C)
- Interactive climate charts with historical trends

### 🛠 Tech Stack:
`Retrofit`, `OkHttp`, `Room DB`, `Moshi`, `Coroutines`, `Flow`, `Hilt`, `Jetpack Compose`, `WorkManager`, `AlarmManager`

### 📁 Structure:
- `core/` – Framework-agnostic components
- `data/` – Data sources and repositories
- `domain/` – Business logic and models
- `presentation/` – UI components and viewmodels
- `infrastructure/` – Platform-specific adapters

### ⚙️ Setup:
- Requires API credentials from **WeatherDataHub**
- See `WeatherTrack/README.md` for configuration and roadmap

---

## 2. **N-Queens Problem Solver (Q1)**

A C++ implementation of the classic N-Queens puzzle solver using a backtracking algorithm.

### 🔧 Features:
- Finds all possible solutions for any N > 0
- Clean, formatted output for each valid configuration
- Efficient pruning and safety checking
- Handles edge cases (N = 1, 2, 3)

### 🛠 How to Use:
- Written in **C++11** or later
- Compile and run using `g++` (see `Q1/README.md` for details)

---

## 3. **Circular Dependency Detector (Q2)**

A C++ tool to detect circular dependencies (cycles) in directed graphs using Depth-First Search (DFS).

### 🔧 Features:
- Efficient **O(V + E)** time complexity
- Handles disconnected graphs
- Standard adjacency list representation
- Clear true/false output

### 🛠 How to Use:
- Written in **C++11** or later
- Compile and run using `g++` (see `Q2/README.md` for details)

---

## 🚀 Getting Started

Each project contains its own `README.md` with detailed instructions, requirements, and usage examples.
Refer to the respective folders (`WeatherTrack`, `Q1`, `Q2`) for more information.

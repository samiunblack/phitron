# Graph

## Terminologies:

**Graph:** Nodes and the connections among them

**Vertex:** A single node in the graph

**Edge:** The relation between two nodes

**Directed Graph:** The edges have direction

**Undirected Graph:** The edges don't have direction

**Weighted Graph:** The edges have cost

**Unweighted Graph:** The edges don't have cost

**Connected Components:** The number of set of nodes that have interconnection

**Cycle:** When by traversing it is possible to come to the initial node

**Tree:** When all the nodes are connected in one connected component and there is no cycle. |E| = |V| - 1


## Representation:

**Sample Input Unweighted**
```cpp
    7 //number of nodes
    12 // number of edges
    1 2 // connection
    2 4
    3 4
    1 7
    1 5
    5 7
    ...
```
**Sample Input Weighted**
```cpp
    7 //number of nodes
    12 // number of edges
    1 2 50 // connection and weight
    2 4 30
    3 4 10
    1 7 60
    1 5 20
    5 7 45
    ...
```

### Adjacency Matrix
Save in a two dimensional array

**Sample Input Directed**
```cpp
    4
    5 
    1 3
    2 3
    3 4
    1 2
    4 2
    ...
```
**Representation:**
```
      1   2   3   4
      
1   | 0 | 1 | 1 | 0 |

2   | 0 | 0 | 1 | 0 |

3   | 0 | 0 | 0 | 1 |

4   | 0 | 1 | 0 | 0 |
```

**Explanation:** In 1st row 3rd column there is a connection


### Adjacency List
Each node has neighbours list

**Sample Input Directed**
```cpp
    4
    5 
    1 3
    2 3
    3 4
    1 2
    4 2
    ...
```

**Representation:**
```
1 -> [3, 2]
2 -> [3]
3 -> [4]
4 -> [2]
```


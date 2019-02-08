//
// Created by Robbie Knowles on 2018-03-18.
//

#include "degreeofsep.h"

// A C++ program for Dijkstra's single source shortest path algorithm.
// The program is for adjacency matrix representation of the graph

#include <stdio.h>
#include <iostream>
using namespace std;

// Number of vertices in the graph
#define V 20

// A utility function to find the vertex with minimum distance value, from
// the set of vertices not yet included in shortest path tree
int minDistance(int dist[], bool sptSet[])
{
    // Initialize min value
    int min = INT_MAX, min_index;

    for (int v = 0; v < V; v++)
        if (sptSet[v] == false && dist[v] <= min)
            min = dist[v], min_index = v;

    return min_index;
}

// A utility function to print the constructed distance array
int printSolution(int dist[], int n)
{
    cout<<"Vertex"<<"\t"<<"Distance from Source\n";
    for (int i = 0; i < V; i++)
        cout<<i<<"\t"<< dist[i]<<endl;
}

// Funtion that implements Dijkstra's single source shortest path algorithm
// for a graph represented using adjacency matrix representation
int dijkstra1(int graph[V][V], int src, int des)
{
    int dist[V];     // The output array.  dist[i] will hold the shortest
    // distance from src to i

    bool sptSet[V]; // sptSet[i] will true if vertex i is included in shortest
    // path tree or shortest distance from src to i is finalized

    // Initialize all distances as INFINITE and stpSet[] as false
    for (int i = 0; i < V; i++)
        dist[i] = INT_MAX, sptSet[i] = false;

    // Distance of source vertex from itself is always 0
    dist[src] = 0;

    // Find shortest path for all vertices
    for (int count = 0; count < V-1; count++)
    {
        // Pick the minimum distance vertex from the set of vertices not
        // yet processed. u is always equal to src in first iteration.
        int u = minDistance(dist, sptSet);

        // Mark the picked vertex as processed
        sptSet[u] = true;

        // Update dist value of the adjacent vertices of the picked vertex.
        for (int v = 0; v < V; v++)

            // Update dist[v] only if is not in sptSet, there is an edge from
            // u to v, and total weight of path from src to  v through u is
            // smaller than current value of dist[v]
            if (!sptSet[v] && graph[u][v] && dist[u] != INT_MAX
                && dist[u]+graph[u][v] < dist[v])
                dist[v] = dist[u] + graph[u][v];
    }

    // print the constructed distance array
    return(dist[des-1]);
}
void dijkstra(int graph[V][V], int src)
{
    int dist[V];     // The output array.  dist[i] will hold the shortest
    // distance from src to i

    bool sptSet[V]; // sptSet[i] will true if vertex i is included in shortest
    // path tree or shortest distance from src to i is finalized

    // Initialize all distances as INFINITE and stpSet[] as false
    for (int i = 0; i < V; i++)
        dist[i] = INT_MAX, sptSet[i] = false;

    // Distance of source vertex from itself is always 0
    dist[src] = 0;

    // Find shortest path for all vertices
    for (int count = 0; count < V-1; count++)
    {
        // Pick the minimum distance vertex from the set of vertices not
        // yet processed. u is always equal to src in first iteration.
        int u = minDistance(dist, sptSet);

        // Mark the picked vertex as processed
        sptSet[u] = true;

        // Update dist value of the adjacent vertices of the picked vertex.
        for (int v = 0; v < V; v++)

            // Update dist[v] only if is not in sptSet, there is an edge from
            // u to v, and total weight of path from src to  v through u is
            // smaller than current value of dist[v]
            if (!sptSet[v] && graph[u][v] && dist[u] != INT_MAX
                && dist[u]+graph[u][v] < dist[v])
                dist[v] = dist[u] + graph[u][v];
    }

    // print the constructed distance array
    printSolution(dist, V);
}

// driver program to test above function
int main()
{
    int graph[20][20];
    /* Let us create the example graph discussed above */
    for (int x = 0; x < 20; x++){
        for (int y = 0; y < 20; y++){
            graph[x][y] = 0;
        }
    }
    //Part1
    graph [1] [6] = 1;
    graph [6] [1] = 1;
    graph [2] [6] = 1;
    graph [6] [2] = 1;
    graph [3] [6] = 1;
    graph [6] [3] = 1;
    graph [4] [6] = 1;
    graph [6] [4] = 1;
    graph [5] [6] = 1;
    graph [6] [5] = 1;
    graph [7] [6] = 1;
    graph [6] [7] = 1;
    graph [3] [4] = 1;
    graph [4] [3] = 1;
//Part 2
    graph [4] [5] = 1;
    graph [5] [4] = 1;
    graph [3] [5] = 1;
    graph [5] [3] = 1;
    graph [3] [15] = 1;
    graph [15] [3] = 1;
    graph [13] [15] = 1;
    graph [15] [13] = 1;
    graph [14] [13] = 1;
    graph [13] [14] = 1;
    graph [12] [13] = 1;
    graph [13] [12] = 1;
//Part 3
    graph [7] [8] = 1;
    graph [8] [7] = 1;
    graph [8] [9] = 1;
    graph [9] [8] = 1;
    graph [9] [10] = 1;
    graph [10] [9] = 1;
    graph [9] [12] = 1;
    graph [12] [9] = 1;
    graph [10] [11] = 1;
    graph [11] [10] = 1;
    graph [11] [12] = 1;
    graph [12] [11] = 1;
    graph [16] [17] = 1;
    graph [17] [16] = 1;
    graph [16] [18] = 1;
    graph [18] [16] = 1;
    graph [18] [17] = 1;
    graph [17] [18] = 1;
    char command;
    cin >> command;
    int x1,y1;
    while (command != 'q'){
        if (command == 'i'){
            cin >> x1;
            cin >> y1;
            graph[x1][y1] = 1;
            graph[y1][x1] = 1;
        }
        else if (command == 'd'){
            cin >> x1;
            cin >> y1;
            graph[x1][y1] = 0;
            graph[y1][x1] = 0;
        }
    }



    return 0;
}


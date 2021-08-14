// C++ implementation of the approach 
#include <bits/stdc++.h> 
using namespace std; 
#define N 100005 

// To store the graph 
vector<pair<int, int> > incr[N], decr[N]; 
int _incr[N], _decr[N], shortest[N]; 

int n, m, src, dest, MAXI = 1LL << 30; 

// Function to add edges 
void Add_edge(int x, int y, int w) 
{ 
	incr[x].push_back({ w, y }); 
	incr[y].push_back({ w, x }); 
	decr[x].push_back({ -w, y }); 
	decr[y].push_back({ -w, x }); 
} 

// Function to find the shortest distance from 
// source to destination 
int Modified_Dijkstra() 
{ 
	int traced_index[MAXI];
	// Total cost, stage, weight of previous, vertex 
	priority_queue<pair<pair<int, int>, pair<int, int> > > q; 

	// Sort the edges 
	for (int i = 1; i <= n; i++) { 
		sort(incr[i].begin(), incr[i].end()); 
		sort(decr[i].begin(), decr[i].end()); 
	} 

	for (int i = 1; i <= n; i++) 
		shortest[i] = MAXI; 

	// Push the source vertex 
	q.push({ { 0, 0 }, { 0, src } }); 

	while (!q.empty()) { 

		// Take the top element in the queue 
		pair<pair<int, int>, pair<int, int> > FRONT = q.top(); 

		// Remove it from the queue 
		q.pop(); 

		// Store all the values 
		int cost = -FRONT.first.first; 
		int stage = FRONT.first.second; 
		int weight = FRONT.second.first; 
		int v = FRONT.second.second; 

		// Take the minimum cost for the vertex 
		shortest[v] = min(shortest[v], cost); 

		// If destination vertex has already been visited 
		if (shortest[dest] != MAXI) 
			break; 

		// To make difference negative 
		if (stage) { 

			// Start from last not visited vertex 
			for (int i = _incr[v]; i < incr[v].size(); i++) { 

				// If we can take the ith vertex 
				if (weight > incr[v][i].first) 
					q.push({ { -(cost + incr[v][i].first), 0 }, 
							{ incr[v][i].first, incr[v][i].second } }); 
				else { 

					// To keep the last not visited vertex 
					_incr[v] = i; 
					break; 
				} 
			} 
		} 

		// To make difference positive 
		else { 

			// Start from last not visited vertex 
			for (int i = _decr[v]; i < decr[v].size(); i++) { 

				// If we can take the ith vertex 
				if (weight < -decr[v][i].first) 
					q.push({ { -(cost - decr[v][i].first), 1 }, 
							{ -decr[v][i].first, decr[v][i].second } }); 
				else { 

					// To keep the last not visited vertex 
					_decr[v] = i; 
					break; 
				} 
			} 
		} 
	} 

	if (shortest[dest] == MAXI) 
		return -1; 

	return shortest[dest]; 
} 

// Driver code 
int main() 
{ 
	n = 5, src = 4, dest = 3; 

	// Adding edges 
	Add_edge(4, 2, 8); 
	Add_edge(1, 4, 6); 
	Add_edge(2, 3, 10); 
	Add_edge(3, 1, 10); 
	Add_edge(1, 2, 3); 
	Add_edge(3, 5, 3); 

	cout << Modified_Dijkstra(); 

	return 0; 
} 


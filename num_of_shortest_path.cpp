// CPP program to count number of shortest
// paths from a given source to every other
// vertex using BFS.
#include <bits/stdc++.h>
using namespace std;
const int mod=1000000007;

// Traverses graph in BFS manner. It fills
// dist[] and paths[]
void BFS(vector<int> adj[], int src, int dist[],
						int paths[], int n)
{
	bool visited[n+1];
	for (int i = 1; i <=n; i++)
		visited[i] = false;
	dist[src] = 0;
	paths[src] = 1;

	queue <int> q;
	q.push(src);
	visited[src] = true;
	while (!q.empty())
	{
		int curr = q.front();
		q.pop();

		// For all neighbors of current vertex do:
		for (auto x : adj[curr])
		{
			// if the current vertex is not yet
			// visited, then push it to the queue.
			if (visited[x] == false)
			{
				q.push(x);
				visited[x] = true;
			}

			// check if there is a better path.
			if (dist[x] > dist[curr] + 1)
			{
				dist[x] = (dist[curr] + 1)%mod;
				paths[x] = paths[curr];
			}

			// additional shortest paths found
			else if (dist[x] == dist[curr] + 1)
				paths[x] =(paths[x]+paths[curr])%mod;
		}
	}
}

// function to find number of different
// shortest paths form given vertex s.
// n is number of vertices.
void findShortestPaths(vector<int> adj[],
					int s, int n)
{
	int dist[n+1], paths[n+1];
	for (int i = 1; i <=n; i++)
		dist[i] = INT_MAX;
	for (int i = 1; i <=n; i++)
		paths[i] = 0;
	BFS(adj, s, dist, paths, n);
	// cout << "Numbers of shortest Paths are: ";
	cout<<paths[n]%mod<<endl;
}

// A utility function to add an edge in a
// directed graph.

// Driver code
int main()
{
	int n,m;
    cin>>n>>m; // Number of vertices
	vector <int> adj[n+1];
    for(int i=1;i<=m;i++){
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
	findShortestPaths(adj, 1, n);
	return 0;
}

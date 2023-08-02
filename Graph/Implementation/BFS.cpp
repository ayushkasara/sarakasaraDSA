vector <int> bfs (int v, vector<int> adj[]) {
	queue<int> q; 
	q.push (0);
	int visited[v] = {0}; 
	visited[0] = 1;
	vector<int> ans;

	while (!(q.empty()) {
		int node = q.front();
		q.pop(); 
		ans.push_back(node);
		for (int i : adj[node]) {
			if (visited [i] != 1) {
				q.push(adj[node][i]);
			}
		}

}
	return ans;
}

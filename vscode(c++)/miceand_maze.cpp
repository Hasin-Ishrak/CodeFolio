#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);
#define ll long long
#define dd double
#define yo '\n'
#define pb push_back
const ll mod = 1e6 + 123;
#define MAX 105

vector<vector<pair<int, int>>> graph(MAX);

int dist[MAX];
bool visited[MAX];

void dijkstra(int s) {
    for (int i = 0; i < MAX; i++) {
        dist[i] = 100000000;
        visited[i] = false;
    }

    dist[s] = 0;

    for (int i = 0; i < MAX - 1; i++) {
        int minDist = 100000000, minIndex = -1;
        for (int j = 0; j < MAX; j++) {
            if (!visited[j] && dist[j] < minDist) {
                minDist = dist[j];
                minIndex = j;
            }
        }

        if (minIndex == -1) break;
        visited[minIndex] = true;
        for (int j = 0; j < graph[minIndex].size(); j++) {
            int n = graph[minIndex][j].first, cost = graph[minIndex][j].second;
            if (dist[minIndex] + cost < dist[n]) {
                dist[n] = dist[minIndex] + cost;
            }
        }
    }
}

int main() {
    fast;
    int N, E, T, M;
    cin >> N >> E >> T >> M;
    int u, v, cost;
    for (int i = 0; i < M; i++) {
        cin >> u >> v >> cost;
        graph[v].push_back(pair<int, int>(u, cost));
    }
    dijkstra(E);
    int cnt = 0;
    for (int i = 1; i <= N; i++) {
        if (dist[i] <= T)
            cnt++;
    }
    cout << cnt << yo;
}

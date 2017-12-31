/*-----------------------------*\
 | Gustavo Toyota - 12/05/2016 |
 | URI 1148 - Countries at War |
\*-----------------------------*/

#include <iostream>
#include <vector>
#include <queue>
#include <map>
#include <set>

#define INF 0xffff

using namespace std;

int dijkstra(vector<map<int, int> > &adjs, int origin, int dest) {
	vector<int> dists(adjs.size(), INF);
	dists[origin] = 0;
	set<pair<int, int> > actives;
	actives.insert({0, origin});
	while (!actives.empty()) {
		int vert = actives.begin()->second;
		if (vert == dest)
			return dists[vert];
		actives.erase(actives.begin());
		for (auto &adj : adjs[vert]) {
			int dist = dists[vert] + adj.second;
			if (dist < dists[adj.first]) {
				actives.erase({ dists[adj.first], adj.first });
				dists[adj.first] = dist;
				actives.insert({ dists[adj.first], adj.first });
			}
		}
	}
	return INF;
}

int main() {
	int num_v, num_e;

	while (cin >> num_v >> num_e && (num_v + num_e)) {
		vector<map<int, int> > adjs(num_v);
		for (int i = 0; i < num_e; ++i) {
			int a, b, w;
			cin >> a >> b >> w;
			--a; --b;

			if (adjs[b].find(a) == adjs[b].end())
				adjs[a][b] = w;
			else {
				adjs[a][b] = 0;
				adjs[b][a] = 0;
			}
		}

		int num_queries;
		cin >> num_queries;
		while (num_queries--) {
			int origin, dest;
			cin >> origin >> dest;
			--origin; --dest;

			int dist = dijkstra(adjs, origin, dest);
			if (dist == INF)
				cout << "Nao e possivel entregar a carta\n";
			else
				cout << dist << "\n";
		}

		cout << "\n";
	}

	return 0;
}
/*-----------------------------*\
 | Gustavo Toyota - 08/05/2016 |
 | URI 1128 - Come and Go      |
\*-----------------------------*/

#include <bits/stdc++.h>

using namespace std;

void dfs(vector<vector<int> > &adjs, vector<int> &vis, int origin) {
    stack<int> pilha;
    pilha.push(origin);
    do {
        int vert = pilha.top();
        pilha.pop();
        if (vis[vert])
            continue;
        vis[vert] = 1;
        for (auto &adj : adjs[vert])
            pilha.push(adj);
    } while (!pilha.empty());
}

int main() {
    int num_v, num_e;
    
    while (cin >> num_v >> num_e && num_v + num_e) {
        vector<vector<int> > adjs(num_v);
        for (int i = 0; i < num_e; ++i) {
            int a, b, p;
            cin >> a >> b >> p;
			--a; --b;
            
            adjs[a].push_back(b);
            if (p == 2)
                adjs[b].push_back(a);
        }
        
		int possivel = 1;
        for (int i = 0; i < num_v && possivel; ++i) {
            vector<int> vis(num_v);
            dfs(adjs, vis, i);
            int all_vis = 1;
            for (int j = 0; j < num_v && all_vis; ++j)
                all_vis = vis[j];
			possivel = all_vis;
        }

		cout << possivel << '\n';
    }
    
    return 0;
}
/*---------------------------------*
 | Gustavo Toyota - 08/05/2016     |
 | URI 1082 - Connected Components |
 *---------------------------------*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    int num_tests;

    cin >> num_tests;

    for (int test = 1; test <= num_tests; ++test) {
        map<char, vector<char>> adjs;
        map<char, int> vis;

        cout << "Case #" << test << ":\n";
        int qtd_v, qtd_e;
        cin >> qtd_v >> qtd_e;
        while (qtd_e--) {
            char e_a, e_b;
            cin >> e_a >> e_b;
            e_a -= 'a';
            e_b -= 'a';
            if (find(adjs[e_a].begin(), adjs[e_a].end(), e_b) == adjs[e_a].end())
                adjs[e_a].push_back(e_b);
            if (find(adjs[e_b].begin(), adjs[e_b].end(), e_a) == adjs[e_b].end())
                adjs[e_b].push_back(e_a);
        }

        bool all_vis;
        int comp = 0;
        do {
            ++comp;

            // Get first non visited
            char non_vis;
            for (auto i = 0; i < qtd_v; ++i)
                if (!vis[i]) {
                    non_vis = i;
                    break;
                }

            // BFS
            queue<char> q;
            q.push(non_vis);
            do {
                // Current
                char v = q.front();
                q.pop();
                if (vis[v])
                    continue;
                vis[v] = comp;
                // Adjs
                for (auto adj : adjs[v])
                    q.push(adj);
            } while (!q.empty());

            // Print component
            for (auto i = 0; i < qtd_v; ++i)
                if (vis[i] == comp)
                    cout <<(char)(i + 'a') << ',';
            cout << '\n';

            // Check all visited
            all_vis = true;
            for (auto i = 0; i < qtd_v; ++i)
                if (!vis[i]) {
                    all_vis = false;
                    break;
                }
        } while (!all_vis);

        cout << comp << " connected components\n\n";
    }

    return 0;
}
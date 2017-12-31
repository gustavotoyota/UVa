/*-----------------------------*\
 | Gustavo Toyota - 05/04/2016 |
 | URI 1934 - Puzzle           |
\*-----------------------------*/

#include <iostream>
#include <map>
#include <vector>
#include <queue>
#include <string>

using namespace std;

struct sequencia {
	map<string, int> vars;
	int val;
};

map<string, int> vals;
vector<vector<string>> vars;
vector<int> rows;
vector<int> cols;
vector<sequencia> seqs;
int num_rows, num_cols;

bool comp(sequencia &a, sequencia &b) {
	return a.vars.size() < b.vars.size();
}

int num_vars_conhecidas(sequencia &s) {
	int conhecidas = 0;
	for (auto &it : s.vars) {
		if (vals.find(it.first) != vals.end())
			conhecidas++;
	}
	return conhecidas;
}

int num_vars_desconhecidas(sequencia &s) {
	return s.vars.size() - num_vars_conhecidas(s);
}

int val_total_conhecidas(sequencia &s) {
	int total = 0;
	for (auto &it : s.vars) {
		total += it.second * vals[it.first];
	}
	return total;
}

string var_desconhecida(sequencia &s) {
	for (auto &it : s.vars) {
		if (vals.find(it.first) == vals.end()) {
			return it.first;
		}
	}
}

int main() {
	cin >> num_rows >> num_cols;

	for (int i = 0; i < num_rows; i++) {
		vector<string> buf;
		vars.push_back(buf);
		for (int j = 0; j < num_cols; j++) {
			string var_name;
			cin >> var_name;
			vars[i].push_back(var_name);
		}
		int row_val;
		cin >> row_val;
		rows.push_back(row_val);
	}
	int col_val;
	for (int i = 0; i < num_cols; i++) {
		cin >> col_val;
		cols.push_back(col_val);
	}

	for (int i = 0; i < num_rows; i++) {
		sequencia seq;
		for (int j = 0; j < vars[i].size(); j++) {
			seq.vars[vars[i][j]]++;
		}
		seq.val = rows[i];
		seqs.push_back(seq);
	}

	for (int i = 0; i < num_cols; i++) {
		sequencia seq;
		for (int j = 0; j < num_rows; j++) {
			seq.vars[vars[j][i]]++;
		}
		seq.val = cols[i];
		seqs.push_back(seq);
	}

	sort(seqs.begin(), seqs.end(), comp);

	do {
		for (int i = 0; i < seqs.size(); i++) {
			int num_vars_desc = num_vars_desconhecidas(seqs[i]);
			if (num_vars_desc == 1) {
				string desconhecida = var_desconhecida(seqs[i]);
				vals[desconhecida] = (seqs[i].val - val_total_conhecidas(seqs[i])) / seqs[i].vars[desconhecida];
				seqs.erase(seqs.begin() + i);
				i--;
			}
			else if (num_vars_desc == 0) {
				seqs.erase(seqs.begin() + i);
				i--;
			}
		}
	} while (!seqs.empty());

	for (auto &it : vals) {
		cout << it.first << ' ' << it.second << '\n';
	}

	return 0;
}
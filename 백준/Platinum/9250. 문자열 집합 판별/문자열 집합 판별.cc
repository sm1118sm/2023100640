#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

struct AhoCorasick {
  int trie[100'001][26]{}, sz = 0;
  int fail[100'001]{};
  int term[100'001]{};
  void Init(const vector<string>& v) {
    for (auto& i : v) {
      int p = 0;
      for (auto& j : i) {
        if (!trie[p][j - 'a']) trie[p][j - 'a'] = ++sz;
        p = trie[p][j - 'a'];
      }
      term[p] = 1;
    }
    queue<int> Q;
    for (int i = 0; i < 26; i++) if (trie[0][i]) Q.push(trie[0][i]);
    while (Q.size()) {
      int p = Q.front(); Q.pop();
      for (int i = 0; i < 26; i++) if (trie[p][i]) {
        int q = fail[p];
        while (q && !trie[q][i]) q = fail[q];
        fail[trie[p][i]] = q = trie[q][i];
        term[trie[p][i]] |= term[q];
        Q.push(trie[p][i]);
      }
    }
  }
  bool Query(const string& s) {
    int p = 0;
    for (auto& i : s) {
      while (p && !trie[p][i - 'a']) p = fail[p];
      p = trie[p][i - 'a'];
      if (term[p]) return 1;
    }
    return 0;
  }
} T;

int main() {
  fastio;
  int n; cin >> n;
  vector<string> v(n);
  for (auto& i : v) cin >> i;
  T.Init(v);
  int q; cin >> q;
  while (q--) {
    string s; cin >> s;
    cout << (T.Query(s) ? "YES" : "NO") << '\n';
  }
}
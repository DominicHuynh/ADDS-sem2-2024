
#include <bits/stdc++.h>
#include "Finder.h"

using namespace std;

int main()
{
  Finder f;
  vector<int> v;
  v = f.findSubstrings("46345654567", "45689");
  for (int &i : v)
    cout << i << " ";
  return 0;
}

#include<bits/stdc++.h>
using namespace std;
struct triplets{
		int u, v, w;
};
void Max_Weight_MST_Prim(vector<pair<int, int>> G[], int vert);
bool cmppair(const triplets &i1, triplets &i2) ;
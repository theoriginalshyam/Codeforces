ll n; 
cin>>n;
vector<vi> v(n);
ll k;
vl size(0);
for(int i =0; i < n; i++){
    cin>>k;
    size.push_back(k);
    v[i].resize(k);
    for(int j = 0; j < k; j++)
    cin>>v[i][j];
}

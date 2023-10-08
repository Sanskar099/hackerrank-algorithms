int diagonalDifference(vector<vector<int>> arr) {
    int d1 = 0;
    int d2 = 0;
    int l = arr.size() -1;
    for(int i=0; i<=l;i++){
        d1 += arr[i][i];
        d2 += arr[i][l-i];
        cout<<d1<<d2<<endl;
    }
    return abs(d1-d2);
}

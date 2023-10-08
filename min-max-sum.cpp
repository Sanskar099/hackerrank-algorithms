void miniMaxSum(vector<int> arr) {
    int minn = 0;
    int maxx = 0;
    
    for(int i =0; i<5; i++){
        if(i < 4){
            minn += arr[i];
        }
        if(i > 0){
            maxx += arr[i];
        } 
    }
    cout<<minn<<" "<<maxx<<endl;
}

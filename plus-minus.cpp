void plusMinus(vector<int> arr) {
    int n = arr.size();
    float p = 0;
    float z = 0;
    float m = 0;
    for(int i=0; i<n; i++){
        if(arr[i] > 0){
            p++;
        }
        else if(arr[i] == 0){
            z++;
        }
        else{
            m++;
        }
    }
    cout<<p/n<<endl;
    cout<<m/n<<endl;
    cout<<z/n<<endl;
}

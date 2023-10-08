string kangaroo(int x1, int v1, int x2, int v2) {
    string ans;
    if((x2 > x1 && v2>v1) || (x1>x2 && v1>v1)){
        ans = "NO";
        return ans;
    }
    else{
        if(x1 < x2){
            while(x1 < x2){
                x1 += v1;
                x2 += v2;
            }
            if(x1 > x2){
                ans = "NO";
                return ans;
            }
        }
        else if(x1 > x2){
            while(x2 < x1){
                x1 += v1;
                x2 += v2;
            }
            if(x2 > x1){
                ans = "NO";
                return ans;
            }
        }
        if(x1 == x2){
            ans = "YES";
        }
    }
    return ans;
}

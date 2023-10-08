vector<int> gradingStudents(vector<int> grades) {
    vector<int> ans(grades.size());
    for(int i=0; i<grades.size(); i++){
        if(grades[i] < 40){
            if(40 - grades[i] < 3 ){
                ans[i] = 40;
            }
            else{    
            ans[i] = grades[i];
            }
        }
        else{
            int t = grades[i]/5;
            t = t*5;
            if(t < grades[i]){
                t += 5;
            }
            if(t - grades[i] < 3){
                ans[i] = t;
            }
            else{
                ans[i] = grades[i];
            }
        }
    }
    return ans;
}

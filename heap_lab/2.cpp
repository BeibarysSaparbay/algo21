class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        bool ok = true;
vector<int> ans;
vector<int> score2;
vector<string> ans2;

for(int i=0;i<score.size();i++){
    score2.push_back(score[i]);
}
while(ok){
    if(score.size() == 0){
        ok = false;
    }
    else{
        int mx = -1;
        int ind;
        for(int i=0;i<score.size();i++){
            if(score[i] > mx){
                mx = score[i];
                ind = i;
            }
        }
        ans.push_back(mx);
        score.erase(score.begin() + ind);
    }
}
for(int i=0;i<score2.size();i++){
    for(int j=0;j<ans.size();j++){
        if(score2[i] == ans[j]){
            if(j+1 == 1){
                ans2.push_back("Gold Medal");
            } 
            else if(j+1 == 2){
                ans2.push_back("Silver Medal");
            }
            else if(j+1 == 3){
                ans2.push_back("Bronze Medal");
            }
            else{
                string ss = to_string(j+1);
                ans2.push_back(ss);
            }
        }
    }
}
return ans2;

    }
};
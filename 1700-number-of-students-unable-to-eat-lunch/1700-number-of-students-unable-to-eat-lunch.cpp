class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int n=sandwiches.size();
        int cnt=0;
        queue<int> s;
        for(auto it: students){
            s.push(it);
        }
        int i =0;
        while(cnt<s.size() && i<n ){
            if(sandwiches[i]==s.front()){
                s.pop();
                i++;
                cnt=0;
            }
            else{
                s.push(s.front());
                s.pop();
                cnt++;
            }
            
        }
        return s.size();
    }
};
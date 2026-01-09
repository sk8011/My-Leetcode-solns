// Last updated: 9/1/2026, 2:51:17 pm
1class TimeMap {
2private:
3    unordered_map<string,vector<pair<int,string>>> mp;
4public:
5    TimeMap() {}
6    
7    void set(string key, string value, int timestamp) {
8        mp[key].push_back({timestamp,value});
9    }
10    
11    string get(string key, int timestamp) {
12        if(mp.find(key)==mp.end() || mp[key].front().first>timestamp){
13            return "";
14        }else{
15            const auto& vec = mp[key];
16            int n=vec.size();
17            int low=0;
18            int high=n-1;
19
20            while(high>low){
21                int mid=low+(high-low+1)/2;
22                if(vec[mid].first>timestamp){
23                    high=mid-1;
24                }else{
25                    low=mid;
26                }
27            }
28            return vec[low].second;
29        }
30    }
31};
32
33/**
34 * Your TimeMap object will be instantiated and called as such:
35 * TimeMap* obj = new TimeMap();
36 * obj->set(key,value,timestamp);
37 * string param_2 = obj->get(key,timestamp);
38 */
class TimeMap {
public: 
    map<string,vector<pair<string,int>>> mp;
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        mp[key].push_back({value,timestamp});
    }
    
    string get(string key, int timestamp) {
        //first check whether key exists or not
        auto it=mp.find(key);

        string ans="";

        if(it != mp.end()){
            auto& values=it->second;

            int low=0; int high=values.size()-1;

            while(low<=high){
                int mid=low+(high-low)/2;

                if(values[mid].second<=timestamp){
                    ans=values[mid].first;
                    low=mid+1;
                }

                else if(timestamp<values[mid].second){
                    high=mid-1;
                }
            }
            
        }
        return ans;
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */
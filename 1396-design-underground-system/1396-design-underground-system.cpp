class UndergroundSystem {
public:
    map<string,vector<int>> timeTracker;
    map<int,pair<int,string>> checkin;
    UndergroundSystem() {
        
    }
    
    void checkIn(int id, string stationName, int t) {
        checkin[id] = {t,stationName};
    }
    
    void checkOut(int id, string stationName, int t) {
        int travelTime = t-checkin[id].first;
        string key = checkin[id].second+":"+stationName;   
        timeTracker[key].push_back(travelTime);
    }
    
    double getAverageTime(string startStation, string endStation) {
        double totalTime = 0.0;
        string key = startStation+":"+endStation;
        for(auto x : timeTracker[key])
            totalTime+=x;
        return totalTime/timeTracker[key].size();
    }
};

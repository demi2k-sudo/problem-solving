#include<iostream>
#include<unordered_map>
#include<deque>
#include<algorithm>
using namespace std;

class LRUCache
{
    private:
        int c;
        unordered_map<int,int> data;
        deque<int> counts;
        
    public:
    //Constructor for initializing the cache capacity with the given value.
    LRUCache(int cap)
    {
        c = cap;
        // code here
    }
    
    //Function to return value corresponding to the key.
    int GET(int key) {
        if (data.find(key) != data.end()) {
            // Move the key to the back of counts (recently used)
            auto it = find(counts.begin(), counts.end(), key);
            counts.erase(it);
            counts.push_back(key);
            return data[key];
        }
        return -1;
    }

    
    //Function for storing key-value pair.
    void SET(int key, int value) {
    // Check if key already exists
    if (data.find(key) != data.end()) {
        // Key already exists, update value and move to the back of counts
        data[key] = value;
        auto it = find(counts.begin(), counts.end(), key);
        counts.erase(it);
        counts.push_back(key);
    } else {
        // Key doesn't exist, insert key-value pair
        data[key] = value;
        counts.push_back(key);
        
        // Check if cache exceeds capacity, remove least recently used
        if (data.size() > c) {
            int oldest = counts.front();
            counts.pop_front();
            data.erase(oldest);
        }
    }
}

};
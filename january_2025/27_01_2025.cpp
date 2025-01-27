
class LRUCache {
  private:
  int capacity;
  list<pair<int,int>>cacheList;
  unordered_map<int, list<pair<int,int>>::iterator> cacheMap;
  public:
    // Constructor for initializing the cache capacity with the given value.
    LRUCache(int cap) {
        // code here
        capacity = cap; 
    }

    // Function to return value corresponding to the key.
    int get(int key) {
        // your code here
        if(cacheMap.find(key) == cacheMap.end()){
            return -1;
        }
        
        auto it = cacheMap[key];
        int value = it->second;
        cacheList.erase(it);
        cacheList.push_front({key, value});
        cacheMap[key] = cacheList.begin();
        
        return value;
    }

    // Function for storing key-value pair.
    void put(int key, int value) {
        // your code here
        
        if(cacheMap.find(key) != cacheMap.end()){
            auto it = cacheMap[key];
            cacheList.erase(it);
        }else if(cacheList.size() == capacity){
            auto lru = cacheList.back();
            cacheMap.erase(lru.first);
            cacheList.pop_back();
        }
        
        cacheList.push_front({key, value});
        cacheMap[key] = cacheList.begin();
    }
};
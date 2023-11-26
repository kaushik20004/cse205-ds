class MyHashSet {
public:
    vector<bool> hashSet;
    MyHashSet() {
        hashSet = vector<bool>(1000000, false);
    } 
    void add(int key) {
          if (key >= hashSet.size())
            hashSet.resize(key + 1, false);
      hashSet[key] = true;
    }
    
    void remove(int key) {
        if (key < hashSet.size())
            hashSet[key] = false;
    }
    
    bool contains(int key) {
        if (key < hashSet.size())
            return hashSet[key];
        return false;
    }
};
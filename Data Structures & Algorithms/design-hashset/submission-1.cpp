class MyHashSet {
private:
    static const int SIZE = 10000;
    vector<vector<int>> buckets;

    int hash(int key) {
        return key % SIZE;
    }

public:
    MyHashSet() : buckets(SIZE) {}

    void add(int key) {
        int h = hash(key);
        for (int x : buckets[h]) {
            if (x == key) return;
        }
        buckets[h].push_back(key);
    }

    void remove(int key) {
        int h = hash(key);
        auto &b = buckets[h];

        for (auto it = b.begin(); it != b.end(); it++) {
            if (*it == key) {
                b.erase(it);
                return;
            }
        }
    }

    bool contains(int key) {
        int h = hash(key);
        for (int x : buckets[h]) {
            if (x == key) return true;
        }
        return false;
    }
};

class SnapshotArray {
private:
    int snapId;
    map<int, map<int, int>> data;
public:
    SnapshotArray(int length) {
        snapId = 0;
        data = map<int, map<int, int>>();
    }
    
    void set(int index, int val) {
        data[index][snapId] = val;
    }
    
    int snap() {
        return snapId++;
    }
    
    int get(int index, int snap_id) {
        auto it = data[index].upper_bound(snap_id);
        if (it == data[index].begin()) {
            return 0;
        }
        return prev(it)->second;
    }
};

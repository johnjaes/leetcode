class MyHashSet {
public:
    map<int, bool> save_list;
	/** Initialize your data structure here. */
	MyHashSet() {

	}

	void add(int key) {
		save_list[key] = true;
	}

	void remove(int key) {
		save_list[key] = false;
	}

	/** Returns true if this set contains the specified element */
	bool contains(int key) {
		if (save_list.find(key) == save_list.end())
		{
			return false;
		}
		else
		{
			return save_list[key];
		}
	}
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet obj = new MyHashSet();
 * obj.add(key);
 * obj.remove(key);
 * bool param_3 = obj.contains(key);
 */

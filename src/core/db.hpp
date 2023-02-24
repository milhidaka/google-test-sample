#include <map>

class DB {
public:
    DB();
    void put(int key, int value);
    int get(int key);
private:
    std::map<int, int> data;
};

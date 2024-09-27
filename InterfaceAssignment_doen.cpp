#include <iostream>
#include <string>
#include <vector>
#include <utility>

using namespace std;

template <typename K, typename V>
class Dictionary {
private:
    vector<pair<K, V>> dict;

public:
    void add(K key, V value) {
        for (auto& pair : dict) {
            if (pair.first == key) {
                pair.second = value;
                return;
            }
        }
        dict.push_back(make_pair(key, value));
    }

    V getValue(K key) {
        for (const auto& pair : dict) {
            if (pair.first == key) {
                return pair.second;
            }
        }
        throw runtime_error("Key not found");
    }

    friend ostream& operator<<(ostream& os, const Dictionary& dictionary) {
        for (const auto& pair : dictionary.dict) {
            os << pair.first << " => " << pair.second << endl;
        }
        return os;
    }
};

int main() {
    Dictionary<string, string> mapObj;
    mapObj.add("blr", "Bangaluru");
    mapObj.add("chn", "Chennai");
    mapObj.add("hyd", "Hyderabad");

    //cout << mapObj.getValue("blr") << endl;
    cout << mapObj;

    return 0;
}

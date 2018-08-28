#include <stdio.h>
#include <string.h>
#include <vector>
#include <iostream>

using namespace std;

class KiwiJuiceEasy {
public:
    vector<int> thePuring(vector<int> capacities, vector<int> bottles, vector<int> fromId, vector<int> toId) {
        for ( int i=0; i < fromId.size(); i++ ) {
            int sum = bottles[fromId[i]] + bottles[toId[i]];
            bottles[toId[i]] = min( sum, capacities[toId[i]] );
            bottles[fromId[i]] = sum - bottles[toId[i]];
        }
        return bottles;
    }
};

int main(void)
{
    KiwiJuiceEasy k;
    vector<int> c{14, 35, 86, 58, 25, 62};
    vector<int> b{6, 34, 27, 38, 9, 60};
    vector<int> f{1, 2, 4, 5, 3, 3, 1, 0};
    vector<int> t{0, 1, 2, 4, 2, 5, 3, 1};
    vector<int> ret = k.thePuring(c, b, f, t);
    for ( auto i: ret ) {
        cout << i << " ";
    }
    cout << endl;
}

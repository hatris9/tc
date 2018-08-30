#include <iostream>
#include <vector>

using namespace std;

class InterestingDigits {
public:
    vector<int> digits(int base) {
        vector<int> v;
        for ( int i=2; i < base; i++ ) {
            if ( ( base - 1 ) % i == 0 ) {
                v.push_back(i);
            }
        }
        return v;
    }
};

int main() {

    InterestingDigits id;
    int base = 9;
    for (auto i: id.digits(base) ) {
        cout << i << " ";
    }
    cout << endl;
}

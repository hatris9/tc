#include<vector>
#include<iostream>
#include<algorithm>

using namespace std;

class Cryptography {
public:
    long long encrypt(vector<int> numbers) {
        return encrypt3( numbers );
    }
    long long encrypt1(vector<int> numbers) {
        std::sort(numbers.begin(), numbers.end());
        numbers[0]++;
        long long ret = 1;
        for (auto i: numbers) {
            ret *= i;
        }
        return ret;
    }
    long long encrypt2(vector<int> numbers) {
        long long product = 1;
        for (auto i: numbers) {
            product *= i;
        }
        long long ret = 0;
        for (auto i: numbers) {
            ret = max(ret, product / i * (i+1));
        }
        return ret;
    }
    long long encrypt3(vector<int> numbers) {
        int min_num = numbers[0];
        int min_idx = 0;
        for (int i=1; i < numbers.size(); i++) {
            if ( numbers[i] < min_num ) {
                min_num = numbers[i];
                min_idx = i;
            }
        }
        numbers[min_idx]++;
        long long ret = 1;
        for (auto i: numbers) {
            ret *= i;
        }
        return ret;
    }
};

int main() {

    Cryptography c;
    vector<int> v = {1000,999,998,997,996,995};

    cout << c.encrypt(v) << endl;
}

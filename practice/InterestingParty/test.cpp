#include <iostream>
#include <vector>
#include <map>

using namespace std;

class InterestingParty {

public:
    int bestInvitation(vector<string> first, vector<string> second) {
        map<string, int> m;
        //copy( second.begin(), second.end(), back_inserter( first ) );
        for ( int i=0; i < first.size(); i++ ) {
            m[first[i]] = 0;
            m[second[i]] = 0;
        }
        for ( int i=0; i < first.size(); i++ ) {
            m[first[i]]++;
            m[second[i]]++;
        }
        int ret = 0;
        for ( auto i: m ) {
            //cout << i.first << ": " << i.second << endl;
            ret = max( i.second, ret );
        }
        return ret;
    }

};

int main() {

    //vector<string> s1{ "fishing", "gardening", "swimming", "fishing" };
    //vector<string> s2{ "hunting", "fishing", "fishing", "biting" };

    vector<string> s1 = { "snakes", "programming", "cobra", "monty" };
    vector<string> s2 = { "python", "python", "anaconda", "python" };

    InterestingParty i;
    cout << i.bestInvitation( s1, s2 ) << endl;
}

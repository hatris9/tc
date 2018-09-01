#include<vector>
#include<iostream>

using namespace std;

class FriendScore {
public:
    int highestScore(vector<string> friends ) {
        int ret = 0;
        for ( int i=0; i < friends.size(); i++ ) {
            int cnt = 0;
            for ( int j=0; j < friends.size(); j++ ) {
                //cout << i << ", " << j << ": " << friends[i][j] <<  endl;
                if ( i == j ) {
                    continue;
                }
                if ( friends[i][j] == 'Y' ) {
                    cnt++;
                } else {
                    for ( int k=0; k < friends.size(); k++ ) {
                        if ( friends[i][k] == 'Y' && friends[j][k] == 'Y' ) {
                            cnt++;
                            break;
                        }
                    }
                }
            }
            //cout << i << ": " << cnt <<  endl;
            ret = max( ret, cnt );
        }
        return ret;
    }
};

int main() {

    FriendScore fs;
    //vector<string> v = { "NYY", "YNY", "YYN" };
    vector<string> v = { "NYNNN", "YNYNN", "NYNYN", "NNYNY", "NNNYN" };
    cout << fs.highestScore(v) << endl;
}

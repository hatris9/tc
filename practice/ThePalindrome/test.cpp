#include <iostream>

using namespace std;

class ThePalindrome {
public:
    int find( string s ) {
        for (int i=s.size(); ; i++ ) {
            bool ok = true;
            for ( int j=0; j < s.length(); j++ ) {
                //cout << i << "," << j << ": " << s[j] << " vs " << s[i-j-1] << endl;
                if ( (i-j-1) < s.length() && s[j] != s[i-j-1] ) {
                    ok = false;
                    break;
                }
            }
            if ( ok ) {
                return i;
            }
        }
        return 0;
    }
};

int main() {
   ThePalindrome p;
   string s = "abdfhdyrbdbsdfghjkllkjhgfds";
   cout << p.find(s) << endl;
}

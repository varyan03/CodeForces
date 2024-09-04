#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string input;
    string answer;
    int count = 0;

    // Read the input from the user
    cin >> input;

    for (int i = 0; input[i] != '\0'; i++) {
        if (input[i] == '.' && count == 0)  {
            answer = answer + "0";
            count = 0;
        } else {
            if (count == 1) {
                if (input[i - 1] == '-' && input[i] == '.') {
                    answer = answer + "1";
                    count = 0;
                } else {
                    answer = answer + "2";
                    count = 0;
                }
            } else {
                count = count + 1;
            }
        }
    }

    // Print the result
    cout << answer << endl;
    return 0;
}

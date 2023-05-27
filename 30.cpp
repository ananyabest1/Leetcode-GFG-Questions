#include <iostream>
#include <vector>
using namespace std;

vector<int> diffWaysToCompute(string input) {
    vector<int> result;
    for (int i = 0; i < input.length(); i++) {
        char c = input[i];
        if (c == '+' || c == '-' || c == '*') {
            string part1 = input.substr(0, i);
            string part2 = input.substr(i + 1);
            vector<int> result1 = diffWaysToCompute(part1);
            vector<int> result2 = diffWaysToCompute(part2);
            for (int num1 : result1) {
                for (int num2 : result2) {
                    int res;
                    if (c == '+')
                        res = num1 + num2;
                    else if (c == '-')
                        res = num1 - num2;
                    else if (c == '*')
                        res = num1 * num2;
                    result.push_back(res);
                }
            }
        }
    }
    if (result.empty()) {
        // If the input is just a single number without any operators
        result.push_back(stoi(input));
    }
    return result;
}

int main() {
    string expression = "2-1-1";
    vector<int> result = diffWaysToCompute(expression);

    cout << "Different ways to add parentheses in the expression: " << expression << endl;
    for (int res : result) {
        cout << res << " ";
    }
    cout << endl;

    return 0;
}
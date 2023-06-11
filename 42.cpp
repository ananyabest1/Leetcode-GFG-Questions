#include <iostream>
#include <stack>
#include <vector>

using namespace std;

vector<int> findNextGreaterElements(const vector<int>& arr) {
    vector<int> result(arr.size());
    stack<int> st;
    for (int i = arr.size() - 1; i >= 0; i--) {
        while (!st.empty() && st.top() <= arr[i]) {
            st.pop();
        }
        if (st.empty()) {
            result[i] = -1;
        } else {
            result[i] = st.top();
        }
        st.push(arr[i]);
    }

    return result;
}

int main() {
    vector<int> arr = {4, 6, 3, 2, 8, 1, 9};
    vector<int> nextGreater = findNextGreaterElements(arr);

    cout << "Next Greater Elements: ";
    for (int i = 0; i < nextGreater.size(); i++) {
        cout << nextGreater[i] << " ";
    }
    cout << endl;

    return 0;
}
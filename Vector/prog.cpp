#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v1 = {1, 2, 3, 4, 5};

    v1.push_back(6);
    v1.pop_back();
    v1.insert(v1.begin(), 0);
    v1.erase(v1.end() - 1);

    for(int i = 0; i < v1.size(); i++){
        cout << v1[i] << " " << endl;
    }

    cout << endl;

    for(int i = 0; i < v1.size(); i++){
        cout << v1.at(i) << " " << endl;
    }

    // v1.clear();

    // cout << v1.empty() << " " << v1.size() << endl;

    cout << endl;

    cout << v1.front() << " " << endl;
    cout << v1.back() << " " << endl;

    return 0;
}

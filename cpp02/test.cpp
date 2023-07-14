#include <iostream>

using namespace std;

int main() {
    
    float n;
    cin >> n;
    cout << bitset<32>(n) << endl;
    
    // (n << 8);
    // cout << bitset<32>(n << 8) <<endl;
    // cout << bitset<32>(n + 4294967296);
    return 0;
}
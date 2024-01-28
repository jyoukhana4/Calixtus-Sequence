#include <iostream>
#include <vector>
#include <fstream>
using namespace std;
// Author: John Youkhana
int main() {
    vector<int> c{1,3};
    for (int n=2; n<100; n++) {
        if (n%3 == 0){
            c.push_back(c[n-1] + c[n-2]);
        }
        else if (n%2 == 0) {
            c.push_back(c[n-1] / 2);
        }
        else {
            c.push_back(n);
        }
    }
    ofstream file("Calixtus.txt");
    for (int i : c) {
        cout << i << " ";
        file << " " << i;
    }
    cout << endl;
    file.close(); 
    system("PAUSE");
    return 0;
}
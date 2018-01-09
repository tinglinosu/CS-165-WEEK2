
#include <iostream>
using namespace std;
int hailstone(int number);

int main() {
    int value, result;
    cout << "Please enter a positive integer.\n";
    cin >> value;
    

    result = hailstone(value);
    
    cout << "It takes " << result <<" step(s) " << "to reach 1." << endl;
    
    return 0;
}



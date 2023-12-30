// copy() and iterators

#include <iostream>
#include <iterator>
#include <vector>

int main() {
    using namespace std;
    int casts[10] = { 6, 7, 2, 9, 4, 11, 8, 7, 10, 5 };
    vector<int> dice(10);
    // copy from array to vector
    copy(casts, casts + 10, dice.begin());
    cout << "Let the dice be cast!\n";
    // create an ostream iterator
    
}
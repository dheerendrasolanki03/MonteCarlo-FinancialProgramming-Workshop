#include <iostream>
#include <cstdlib>  
#include <iomanip>  
using namespace std;
int main() {
    int n = 100;
    int heads = 0;
    for (int i = 0; i < n; ++i) {
        int toss = rand() % 2;
        if (toss == 1)
            heads++;
    }
    double probability = static_cast<double>(heads) / n;
    cout << fixed << setprecision(4);
    cout << "Total tosses: " << n << endl;
    cout << "Heads: " << heads << endl;
    cout << "Observed probability of Head = " << probability << endl;
    return 0;
}

#include <iostream>
#include <random>
#include <cmath>
#include <vector>
using namespace std;
int main() {
    // Parameters
    double S0 = 100.0;   // initial stock price
    double mu = 0.08;    // expected annual return = 8%
    double sigma = 0.2;  // annual volatility = 20%
    double T = 1.0;      // time in years
    int steps = 252;     // trading days in a year
    int n_paths = 1000;  // number of Monte Carlo simulations

    double dt = T / steps;  // time step (1 day)

    // Random number generator for normal distribution
    random_device rd;
    mt19937 gen(rd());
    normal_distribution<> dist(0.0, 1.0);

    vector<double> final_prices;
    final_prices.reserve(n_paths);

    // Monte Carlo simulation
    for (int i = 0; i < n_paths; ++i) {
        double S = S0; // start price for each path
        for (int j = 0; j < steps; ++j) {
            double Z = dist(gen);  // random shock
            S = S * exp((mu - 0.5 * sigma * sigma) * dt + sigma * sqrt(dt) * Z);
        }
        final_prices.push_back(S);
    }

    // Calculate average final price
    double sum = 0.0;
    for (double price : final_prices) sum += price;
    double avg_price = sum / n_paths;

    cout << "Monte Carlo Stock Simulation" << endl;
    cout << "-----------------------------" << endl;
    cout << "Initial Price: " << S0 << endl;
    cout << "Average Price after 1 year: " << avg_price << endl;

    // Estimate probability of price being above 120
    int count_above = 0;
    for (double price : final_prices)
        if (price > 120.0) count_above++;
    double prob_above = double(count_above) / n_paths;

    cout << "Probability Stock > 120 after 1 year: " << prob_above * 100 << "%" << endl;
    return 0;
}

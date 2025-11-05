import numpy as np # type: ignore
import matplotlib.pyplot as plt # type: ignore

# Parameters
S0 = 100.0       # initial stock price
mu = 0.08        # expected annual return (8%)
sigma = 0.2      # volatility (20%)
T = 1.0          # time in years
steps = 252      # trading days
n_paths = 1000   # number of random paths

dt = T / steps

# Simulate price paths
np.random.seed(42)
S = np.zeros((steps + 1, n_paths))
S[0] = S0

for i in range(1, steps + 1):
    Z = np.random.standard_normal(n_paths)
    S[i] = S[i - 1] * np.exp((mu - 0.5 * sigma**2) * dt + sigma * np.sqrt(dt) * Z)

# Calculate the average (expected) path
average_path = np.mean(S, axis=1)

# Plot
plt.figure(figsize=(10,6))
plt.plot(S[:, :10], alpha=0.3,)  # show only first 10 paths for clarity
plt.plot(average_path, color='red', linewidth=2.5, label='Average (Expected) Path')

plt.title("Monte Carlo Simulation of Stock Price Paths")
plt.xlabel("Days")
plt.ylabel("Stock Price")
plt.legend()
plt.grid(True)
plt.show()

# Print expected final price
print(f"Expected final price after 1 year: ₹{average_path[-1]:.2f}")

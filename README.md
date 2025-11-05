# 💹 Monte Carlo & Financial Programming Workshop

This repository contains the code I presented as a **Tech Lead at GeeksforGeeks (MIT-ADT University)** during the **Financial Programming Workshop**.  
I covered the **Law of Large Numbers**, **Monte Carlo Simulations**, and **Python-based visualizations** for better understanding of financial modeling.

---

## 🧠 Overview

This project demonstrates how **randomness** and **probability** drive financial forecasting through simulations.  
Participants learned to:
- Understand the **Law of Large Numbers (LLN)**  
- Implement **Monte Carlo simulations** for stock prices  
- Visualize financial data using **Matplotlib**

---

## 📂 Repository Contents

| File | Description |
|------|--------------|
| 🪙 `lln.cpp` | Demonstrates the *Law of Large Numbers* using a coin toss experiment. |
| 📈 `sim.cpp` | Monte Carlo stock price simulation using random walks in C++. |
| 🐍 `plot.py` | Python visualization of simulated stock price paths using Matplotlib. |

---

## ⚙️ How to Run

### ▶️ Run C++ Programs
Open your terminal in the project directory and run:

```
g++ lln.cpp -o lln && ./lln
g++ sim.cpp -o sim && ./sim
```

Both programs will display simulation results directly in the console.

---

### 🐍 Run Python Visualization
Make sure Python (3.7+) is installed, then run:

```
pip install numpy matplotlib
python plot.py
```

💡 Tip: To save the visualization as an image, add this line **before** `plt.show()` in your code:

```
plt.savefig("montecarlo_plot.png", dpi=300)
```
---

## 📊 Example Outputs

**🧮 Monte Carlo Simulation (C++):**
```
Monte Carlo Stock Simulation
-----------------------------
Initial Price: 100
Average Price after 1 year: 108.45
Probability Stock > 120 after 1 year: 23.4%
```

**🐍 Python Output:**
```
Expected final price after 1 year: ₹108.32
```

## 💬 About the Workshop

This workshop introduced participants to:
- Random simulations in finance  
- Modeling uncertainty in stock movements  
- Visualizing and interpreting outcomes for better decision-making  

I also discussed the difference between **Monte Carlo** , **portfolio optimization** and **backtesting**, emphasizing their distinct goals in quantitative finance.

---

## 🔗 Connect with Me

🌐 **LinkedIn:** https://www.linkedin.com/in/dheerendra-pratap-singh-solanki-2362652ab
💻 **GitHub:** https://github.com/dheerendrasolanki03?tab=repositories
---

🧩 *Monte Carlo simulations and probabilistic models form the backbone of modern quantitative finance — helping estimate risks, optimize portfolios, and forecast uncertainty.*

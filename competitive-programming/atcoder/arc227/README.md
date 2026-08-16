  # 🏆 AtCoder Regular Contest 227

- **Date:** 2026-08-16
- **Type:** Unrated Practice
- **Goal:** Observation speed and Greedy logic.

## 🟢 Problem A: [ Fermat Point of Binary Strings ]
- **Link:** [Problem A Link](https://atcoder.jp/contests/arc227/tasks/arc227_a )
- **Solution:** [A.cpp](./A.cpp)
- **Technical Insight:** 
Fermat Point & Median Optimization: Minimizing the sum of distances ($\text{dist}(A,X) + \text{dist}(B,X) + \text{dist}(C,X)$) for adjacent swaps reduces to finding the coordinate-wise median of the positions of matching characters (the occurrences of '1'). Sorting the indices of the three strings for each occurrence and selecting the median value ($temp[1]$) guarantees the absolute minimum deviation in $\mathcal{O}(N \log N)$ time.
## 🔴 Problems B (Upsolving)
- **Status:** To be completed by tomorrow.
- **Objective:** Understand the mathematical trick that simplifies the constraints.

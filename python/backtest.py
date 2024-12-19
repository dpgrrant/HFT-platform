import numpy as np
import pandas as pd

def run_backtest(strategy, historical_data):
    # Placeholder: simulate trades
    pnl = np.random.normal(loc=0.0, scale=1.0, size=1)[0]
    return pnl

if __name__ == "__main__":
    sample_data = pd.DataFrame({
        'time': [1,2,3],
        'price': [100, 101, 102]
    })
    profit = run_backtest("example_strategy", sample_data)
    print(f"Backtest Profit: {profit}")

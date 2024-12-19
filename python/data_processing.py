import pandas as pd

def load_data(source):
    # In the future: load Parquet files or query kdb+ for historical data
    return pd.DataFrame()

if __name__ == "__main__":
    df = load_data("sample_source")
    print(df.head())

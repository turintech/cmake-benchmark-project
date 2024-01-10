import pandas as pd
import numpy as np
import random

np.random.seed(0)

df = pd.DataFrame(np.random.randint(0,100000000,size=(100, 8)), columns=list('ABCDEFGH'))



mask = (df['A'] > 38712131) & (df['A'] < 58712131)
filtered_df = df.loc[mask, ['A', 'B']]

for index, row in filtered_df.iterrows():
    print(f"df[{index}]['A']={row['A']}{row['B']}")
    

print("Done")
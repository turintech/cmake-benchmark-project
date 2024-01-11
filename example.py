import pandas as pd
import numpy as np
import random

np.random.seed(0)

df = pd.DataFrame(np.random.randint(0,100000000,size=(100, 8)), columns=list('ABCDEFGH'))

for index in df.index:
    if df['A'][index] > 38712131 and df['A'][index] < 58712131:
        print ("df[" + str(index) + "]['A']=" + str(df['A'][index]) + str(df['B'][index]))
    

print("Done")

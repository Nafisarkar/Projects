#import
import pandas as pd

#read the csv

df = pd.read_csv("res/data.csv")

#check the csv for info

print(df.info())
print(df.shape)
print(df.count())

#check for empty cell

#resolve the missing cells


import pandas as pd

def Space():
 print("\n---------------------------------------------------------------------------------------------------------------------------\n")

df = pd.read_csv("Dataset/student-dataset.csv")
print(df.head(10))
Space()
print(df.isna())
Space()
print(df.isna().sum())
Space()

totalnull = df.isna().sum().sum()
print(f"Total null cell [ {totalnull} ] in dataset")
Space()

avgAge = df["age"].median()
print(f'Median Age is {avgAge}')
Space()
df["age"].fillna(int(avgAge), inplace=True)
df["age"].isnull().sum()
print(df)
Space()

engGrade = int(df["english.grade"].mean())
print(f'Mean Eng Grade is {engGrade}')
Space()

df["english.grade"].fillna(int(engGrade), inplace=True)
df["english.grade"].isnull().sum()
print(df)
Space()


df.drop("ethnic.group", axis=1, inplace=True)
print(df)
Space()

df.dropna(inplace=True)
print(df)
Space()

df.to_csv("Final.csv", index=False)



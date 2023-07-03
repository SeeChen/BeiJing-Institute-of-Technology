'''
描述
seeds数据集存放了不同品种小麦种子的区域、周长、压实度、籽粒长度，籽粒宽度，不对称系数，籽粒腹沟长度以及类别数据。目前已使用该数据集构建并训练模型：聚类为3和4；已使用降维模块实现数据降维，降维后数据保存为seed_cluster_3.csv文件和seeds_cluster_4.csv文件。
要求
1. 请分析seed_cluster_3.csv文件和seeds_cluster_4.csv文件的数据结构。
2. 使用matplotlib.pyplot实现聚类结果可视化，如示例所示。请2中聚类结果的可视化不同之处。
'''
import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
plt.rcParams["font.sans-serif"] = "SimHei"
plt.rcParams["axes.unicode_minus"] = False
#读文件seed_cluster_3.csv
df = pd.read_csv("seed_cluster_3.csv",index_col=0)
ls_labels = sorted(np.unique(df['labels']))
df1 = df[df['labels'] == ls_labels[0]]
df2 = df[df["labels"] == ls_labels[1]]
df3 = df[df["labels"] == ls_labels[2]]
p1 = plt.figure(figsize=(8,4),dpi=100)
ax1 = p1.add_subplot(1,2,1)
plt.plot(df1['0'], df1['1'], 'bo')
plt.plot(df2['0'], df2['1'], 'r*')
plt.plot(df3['0'], df3['1'], 'gD')
plt.title('聚类为3')
plt.xticks(np.arange(-15, 15, 5))
plt.yticks(np.arange(-15, 15, 5))
#读文件seed_cluster_4.csv
df = pd.read_csv("C:/Users/USER/Downloads/seed_cluster_4.csv",index_col=0)
ls_labels = sorted(np.unique(df['labels']))
df1 = df[df['labels'] == ls_labels[0]]
df2 = df[df["labels"] == ls_labels[1]]
df3 = df[df["labels"] == ls_labels[2]]
df4 = df[df["labels"] == ls_labels[3]]
ax2 = p1.add_subplot(1,2,2)
plt.plot(df1['0'], df1['1'], 'bo')
plt.plot(df2['0'], df2['1'], 'r*')
plt.plot(df3['0'], df3['1'], 'gD')
plt.plot(df4['0'], df4['1'], 'yD')
plt.title('聚类为4')
plt.xticks(np.arange(-15, 15, 5))
plt.yticks(np.arange(-15, 15, 5))
plt.savefig('seed_cluster.png')

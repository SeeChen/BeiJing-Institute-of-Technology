'''
描述
Iris 鸢尾花数据集是一个经典数据集，在统计学习和机器学习领域都经常被用作示例。数据集内包含 3 类共 150 条记录，每类各 50 个数据，每条记录都有 4 项特征：花萼长度、花萼宽度、花瓣长度、花瓣宽度，可以通过这4个特征预测鸢尾花卉属于（iris-setosa, iris-versicolour, iris-virginica）中的哪一品种。目前已使用sklearn.datasets中的鸢尾花数据集，构建并训练模型聚类为3个；已使用sklearn.manifold中TSNE 模块实现数据降维，降维后数据保存为iris_cluster.csv文件。
要求
1. 请分析iris_cluster.csv文件的数据结构。
2. 使用matplotlib.pyplot实现iris_cluster.csv可视化，如示例所示。
'''
import matplotlib.pyplot as plt
import numpy as np
import pandas as pd
plt.rcParams["font.sans-serif"] = "SimHei"
plt.rcParams["axes.unicode_minus"] = False
df = pd.read_csv('iris_cluster.csv', index_col=0)
ls_labels = sorted(np.unique(df['labels']))
df1 = df[df['labels'] == ls_labels[0]]
df2 = df[df['labels'] == ls_labels[1]]
df3 = df[df['labels'] == ls_labels[2]] 
fig = plt.figure(figsize = (9, 6), dpi = 200)
plt.title('聚类二维可视化')
plt.plot(df1.iloc[:,0],df1.iloc[:,1],'bo')
plt.plot(df2.iloc[:,0],df2.iloc[:,1],'r*')
plt.plot(df3.iloc[:,0],df3.iloc[:,1],'gD')
plt.legend(labels = ['setosa', 'versicolor', 'virginica'], loc = 'upper right')
plt.savefig('iris_cluster.png')

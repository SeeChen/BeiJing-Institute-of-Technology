'''
描述
北京市政务数据资源网公布了北京市2001-2017年水资源情况数据。主要包括全年水资源总量、人均水资源、全年供水总量、全年用水总量、万元地区生产总值耗水量等数据。其中：
水资源总量 = 地表水资源量 + 地下水水资源量 - 重复计算水资源量
全年供水总量按来源分为地表水、地下水、再生水和南水北调水构成。再生水和南水北调水的数据有一定的缺失，需要对缺失值进行填充。
全年用水总量按用途分为农业用水、工业用水、生活用水、生态环境用水构成。
要求
数据预处理，再生水和南水北调水数据存在缺失值，请填充缺失值为0；
设置画布尺寸为12*12英寸，分辨率dpi为100；
添加子图1，绘制全年水资源量折线图；
x轴刻度为年份，隔2年显示，45度斜显示
y轴刻度为0至40,相隔5
添加子图2，绘制人均水资源量散点图
绘制点的类型为circle('o'),颜色为蓝色
x轴刻度为年份，隔2年显示，45度斜显示
y轴刻度为100至200,相隔10
添加子图3，2017年用水饼图(农业用水、工业用水、生活用水、生态环境用水)
设置饼图中各个饼之间的间距均为01，百分比显示格式为小数点后保留2位；
添加子图4，2001-2017年万元地区生产总值耗水量箱线图
凹口的形式展现箱线图，用线的形式表示均值
保存文件名为png ；
'''
import matplotlib.pyplot as plt
import numpy as np
import pandas as pd
plt.rcParams["font.sans-serif"] = "SimHei"
plt.rcParams["axes.unicode_minus"] = False
df_water = pd.read_csv('2001-2017年北京市水资源情况信息.csv', engine="python")
df_water = df_water.T
df_water.columns = pd.Series([i.replace(" ","") for i in list(df_water.iloc[0,:])])
df_water = df_water.iloc[1:,:]
d = {}
for i in list(df_water.columns):
    d[i]= "float"
df_water = df_water.astype(d)
fig = plt.figure(figsize=(12,12),dpi=100)  
#添加第一幅子图:全年水资源量、地表水资源量、地下水资源量
ax1 = fig.add_subplot(2,2,1)
plt.title("全年水资源量折线图")
plt.xlabel("年份")
plt.ylabel("亿立方米")
plt.plot(df_water.index, df_water.iloc[:,0], 'r-')
plt.plot(df_water.index, df_water.iloc[:,1], 'g--')
plt.plot(df_water.index, df_water.iloc[:,2], 'b:')
plt.xticks(range(0,18,2),np.array(df_water.index)[range(0,18,2)],rotation=45)
plt.yticks([0,5,10,15,20,25,30,35,40])
plt.legend(df_water.columns[0:3])
##添加第二幅子图:人均水资源（单位：立方米/人）
ax2 = fig.add_subplot(2,2,2)
plt.title("人均水资源量散点图")
plt.xlabel("年份")
plt.ylabel("立方米/人")
plt.scatter(df_water.index, df_water.iloc[:,3],marker='o', c="blue")
plt.xticks(range(0,18,2),np.array(df_water.index)[range(0,18,2)],rotation=45)
plt.yticks([i for i in range(100,210,10)])
plt.legend(["人均水资源(立方米/人)"])
##添加第三幅子图:2017年农业用水、工业用水、生活用水、生态环境用水饼图
ax3 = fig.add_subplot(2,2,3)
plt.title("2017年用水量饼图")
plt.pie(df_water.iloc[-1,10:14],explode=[0.01,0.01,0.01,0.01], labels=list(df_water.columns[10:14]), autopct="%1.2f%%")
##添加第四幅子图:2001-2017年万元地区生产总值耗水量（立方米）
ax3 = fig.add_subplot(2,2,4)
plt.title("2001-2017年万元地区生产总值耗水量箱线图")
plt.boxplot(df_water.iloc[:,-1], notch=True, labels=["万元地区生产总值耗水量（立方米）"], meanline=True)
plt.savefig("2001-2017年北京市水资源情况信息0.png")

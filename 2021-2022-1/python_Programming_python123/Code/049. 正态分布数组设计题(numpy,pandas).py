'''
描述
1、使用numpy库random子库随机产生四门课的成绩，随机种子数取：0x1010
2、每门课程40个成绩，分布范围为50-100分之间，要符合正态分布规则，μ=75，σ=8，学生的成绩要为整数。
3、用此成绩创建一个DataFrame对象，学生的学号范围为1001-1040，四门课程的列标签分别为‘A','B','C','D'.行索引为学生的学号
'''
import numpy as np
import pandas as pd
zz = int(input(), 16)
np.random.seed(zz)
mark = np.random.normal(loc =75.0, scale= 8.0, size = (39,4)).astype(int)
col = ['A', 'B', 'C', 'D']
data = pd.DataFrame(mark, columns = col, index = pd.RangeIndex(start = 1001, stop = 1040, step = 1))
print(data.head())

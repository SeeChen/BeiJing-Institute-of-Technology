'''
描述
利用附件中的成绩数据进行成绩统计，根据输入的同学的名字，输出其总分和平均分。根据输入的课程名字，输出这门课程的平均分、中位数和标准差。（输出结果中的数值保留2位小数）
输入格式
输入一个同学的名字
输入一门课程的名字
输出格式
该同学在数组中的位置序号、平均成绩
该门课程在数组中的位置序号、该课程平均成绩、中位数和标准差
'''
import pandas as pd
import numpy as np
data = pd.read_csv('成绩单数字.csv', encoding = 'UTF-8')
name = input(); sub = input()
data.drop(['学号'], axis = 1, inplace = True)
data['mean'] = data.mean(axis = 1)
loc_name = data[data.姓名 == name].index.tolist()[0]
print('[[{} 0]]'.format(loc_name + 1))
print(name + '同学的平均成绩为{:.2f}'.format(data['mean'][loc_name]))
loc_sub = data.columns.get_loc(sub)
print('[[0 {}]]'.format(loc_sub + 1))
print(sub + '课程平均成绩为{:.2f}'.format(data[sub].mean()))
print('该课程中位数为{:.2f}'.format(data[sub].median()))
print('该课程标准差为{:.2f}'.format(data[sub].values.std()))

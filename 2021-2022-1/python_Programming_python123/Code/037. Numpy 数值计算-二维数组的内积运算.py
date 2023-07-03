'''
描述
假如有数组A和数组B都是两行两列，则内积计算结果也为两行两列的一个数组为C，计算公式如下。
C[0,0]=A[0,0] *B[0,0] + A[0,1] *B[0,1]；
C[0,1]=A[0,0] *B[1,0] + A[0,1] *B[1,1]；
C[1,0]=A[1,0] *B[0,0] + A[1,1] *B[0,1]；
C[1,1]=A[1,0] *B[1,0] + A[1,1] *B[1,1]；
'''
import numpy as np
try:
    a = np.array(eval(input()))
    b = np.array(eval(input()))
    print(np.inner(a, b))
except:
    print("输入格式有错误！")

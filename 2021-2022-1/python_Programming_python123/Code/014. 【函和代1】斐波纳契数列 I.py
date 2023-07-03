'''
求斐波纳契（Fibonacci）数列：1, 1, 2, 3, 5, 8... 的前 n 项，n 的值从键盘输入。
示例1：
输入："10"
输出："1,1,2,3,5,8,13,21,34,55"
'''
def Fibonacci(n):
    (a,b)=(1,1)
    for i in range(1,n):
        print(a,end=',')
        (a,b)=(b,a+b)
    print(a)
n = int(input())
Fibonacci(n)

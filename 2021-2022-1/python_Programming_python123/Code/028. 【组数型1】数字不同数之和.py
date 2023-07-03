'''
获得用户输入的一个整数 N，输出 N 中所出现不同数字的和。
例如：用户输入 123123123，其中所出现的不同数字为：1、2、3，这几个数字和为 6。
'''
n = set(input())
Sum = 0
for i in n:
    Sum = Sum + eval(i)
print(Sum)

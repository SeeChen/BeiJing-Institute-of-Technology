'''
求和 1!+2!+3！…+n！，n 的值从键盘输入。
示例1：
输入："10"
输出："4037913"
示例2：
输入："12"
输出："522956313"
'''
def  recursion(n):
    if n==1:
        return 1
    else:
        return  n*recursion(n-1)
num = eval(input())
sum = 0
for  i  in range(1,num+1):
    sum +=recursion(i)
print(sum)

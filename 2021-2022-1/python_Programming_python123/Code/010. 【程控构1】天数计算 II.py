'''
获取用户输入月份，输出该月有多少天（考虑闰年）。
示例1：
输入："2000,2"
输出："29"
示例2：
输入："2018,2"
输出："28"
'''
y,m = eval(input())
if(m==1 or m==3 or m==5 or m==7 or m==8 or m==10 or m==12):
    print(31)
elif m==2:
    if(y%4==0 and y%100!=0) or (y%400==0):
        print(29)
    else:
        print(28)
else:
    print(30)

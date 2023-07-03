'''
描述
根据附件文件里的数据统计历史名人的寿命，所有附件文件的格式都一样，形如“王佐(66),王俊民(28),吴潜(68),李迪(77),王昂(43)”，里面存储了一些历史名人的寿命信息。请读入文件名(例如file1.txt）打印文件名的前缀（file1），使用file1.txt里的数据完成下面的任务：
读入1，则再读入一个人名，并打印其年龄。如果该名人不在txt 文件中，则打印”人名不存在”。
读入2，则输出高寿名人前三（如果年龄相同则将姓名作为第二排序依据）。
读入3，则输出寿命最短名人的前三（如果年龄相同则将姓名作为第二排序依据）。
读入4，则统计txt文件里所有名人的平均寿命。
读入5，并输入一个年龄范围（a,b），则输出这个年龄范围内（a<= 年龄 <=b）的人数占比。
读入其它则输出“选项错误”。
'''
import os
path = input()
prefix = os.path.splitext(path)[0]
print(prefix)
f = open(path, 'r', encoding = 'utf-8').read()
ls = f.split(',')
d = {}
for i in range(len(ls)):
    d[ls[i][0:-4]] = eval(ls[i][-3:-1])
sd = sorted(d.items(), key=lambda val:val[1],reverse = False)
num = eval(input())
if num == 1:
    name = input()
    if name not in d:
        print('人名不存在')
    else:
        print(name, d[name])
elif num == 2:
    print(sd[-1][0], sd[-1][1])
    print(sd[-2][0], sd[-2][1])
    print(sd[-3][0], sd[-3][1])
elif num == 3:
    print(sd[1][0], sd[1][1])
    print(sd[0][0], sd[0][1])
    print(sd[2][0], sd[2][1])
elif num == 4:
    Sum = 0
    for i in d:
        Sum = Sum + d[i]
    print('平均年龄：{:.1f}'.format(Sum/len(d)))
elif num == 5:
    area = input().split(',')
    area[0] = eval(area[0])
    area[1] = eval(area[1])
    count = 0
    for i in d:
        if d[i] >= area[0] and d[i] <= area[1]:
            count += 1
    print("{}岁到{}岁之间的有{}个,占{:.2f}%".format(area[0], area[1], count, count/len(d)*100))
else:
    print('选项错误')

'''
描述
A和B两个赌徒各有一百块钱，他们通过抛硬币来赌，正面朝上A赢，B要给A十块钱，反面朝上B赢，A要给B二十块钱，一直持续其中一个人把钱输光为止。请用随机数计算A和B最后把钱输光的概率各是多少？(结果用百分数表示，保留2位小数)
输入格式
输入为英文逗号分隔的 2 个整数, 末尾没有逗号，分别代表随机数种子和随机次数
输出格式
A输光的概率为：**%
B输光的概率为：**%
'''
import random
def win():
    a, b = 100, 100
    while a > 0 and b > 0:
        num = random.randint(1, 2)
        if num == 1:
            b -= 10
            a += 10
        else:
            a -= 20
            b += 20
    else:
        if a <= 0:
            return 1 
        return 0
seed, n = map(int, input().split(','))
random.seed(seed)
count = 0
for i in range(n):
    if win():
        count += 1
print('A输光的概率为：{:.2%}'.format(count / n))
print('B输光的概率为：{:.2%}'.format(1 - count / n))

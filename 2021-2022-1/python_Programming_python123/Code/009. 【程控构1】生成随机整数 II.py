#使用 random 函数库，编写一个程序，输入一个整数做为随机数种子，随机产生一个 0 - 100 之间的整数并输出。
import random
random.seed(eval(input()))
print(random.randint(0,100))

'''
描述
import random
random.seed(n)
很多校园都放置了大量的快递自提柜，放入快递时生成一个取件码发给用户，用户凭取件码自行提取货物。取件码的字符包括：数字0-9和字母A、B、C、D、E、F、G、H、I、J。每次从以上字符串 'ABCDEFGHIJ0123456789'中随机取一个字符，重复6次， 生成一个形如“9I16A4”的取件码，各字符的使用次数无限制。随机数种子 n 由用户输入。
输入格式
输入一个正整数
输出格式
输出一个包含 6 个字符的字符串
'''
import random
n = eval(input())
random.seed(n)
s = ''
for i in range(6):
    ch = 'ABCDEFGHIJ0123456789'
    s = s + random.choice(ch)
print(s)

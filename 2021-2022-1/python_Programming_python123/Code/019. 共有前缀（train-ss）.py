'''
描述
在一行中输入以空格间隔的若干以字母数字字符组成的字符串（字符串之间不包含其他字符）
定义一个函数，找出这些字符串的最长的共有前缀并输出
如果不存在共有前缀，输出‘NOT FOUND’
'''
def f(strs):
    s1 = min(strs)
    s2 = max(strs)
    for i,j in enumerate(s1):
        if j != s2[i]:
            if i == 0:
                return 'NOT FOUND'
            else:
                return s1[:i]
    return s1
strs=list(input().split())
print(f(strs))

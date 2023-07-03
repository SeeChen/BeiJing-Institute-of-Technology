'''
描述
读入一个字典类型的字符串，反转其中键值对输出。
即，读入字典key:value模式，输出value:key模式。
输入格式
用户输入的字典格式的字符串，如果输入不正确，提示：输入错误。
输出格式
给定字典d，按照print(d)方式输出
'''
dic_ = input()
n = {}
try:
    dic = eval(dic_)
    for key,value in dic.items():
        n.update({value:key})
    print(n)
except:
    print("输入错误")

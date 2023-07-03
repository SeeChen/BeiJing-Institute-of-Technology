'''
描述
编程读取附件fruit.txt中的内容并输出到屏幕上，文件中中文编码为'utf-8'。
输入格式
该题目没有输入
'''
print(open('fruit.txt', 'r', encoding = 'UTF-8').read())

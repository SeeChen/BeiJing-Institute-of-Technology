'''
从键盘输入一个汉字，在屏幕上显示输出该汉字的 Unicode 编码值，请完善代码。
示例1：
输入："国"
输出：""国"汉字的Unicode编码：22269"
'''
s = input()
print("\"{}\"汉字的Unicode编码：{}".format(s,ord(s)))

'''
判断数据类型
描述
用户输入一个数据，判断用户输入的是复数("complex")、浮点数("float")、整数("int")还是字符串("string")，输出括号中与之匹配的数据类型。
输入格式
输入一个数据
输出格式
输出括号中与之匹配的数据类型
'''
s = input()
try:
    complex(s)
    s=eval(s)
    if isinstance(s,int) == True:
        print("int")
    elif isinstance(s,float) == True:
         print("float")
    else:
        print("complex")
except:
    print("string")

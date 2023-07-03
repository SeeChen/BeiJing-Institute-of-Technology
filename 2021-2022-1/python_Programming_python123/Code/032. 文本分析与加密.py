'''
描述
读取文件中的内容为字符串可以用以下函数实现：
# 读文件，返回字符串，file为文件名变量，若为文件名时，须为字符串类型
def read_file(file):
    with open(file, 'r', encoding='utf-8') as f:
        return f.read()        # 返回值为字符串
读取附件中的文件，完成以下操作：
1.分类统计文件中大写字母、小写字母、数字、空白字符（包括空格、\n、\t等，可用isspace()方法判断）和其他字符的数量
2.输出文件中单词的数量（将其中所有标点符号替换为空格，再根据空格对字符串进行切分可以得到元素为单词的列表。数字按单词统计，如“ 1994” 计算一个单词）
3.用恺撒加密方法对上述文件内容进行加密，为提高加密强度，约定输入一个秘密单词来产生偏移量，偏移量计算方法为先计算用户输入的字符串中每个字符的ASCII值的和，再对26取模，结果作为偏移量。为避免偏移量恰好为0，本题约定秘密单词为用于表示星期几的单词，即'Monday', 'Tuesday', 'Wednesday', 'Thursday', 'Friday', 'Saturday', 'Sunday'中的一个。
在密码学中，凯撒密码是一种最简单且最广为人知的加密技术。“恺撒密码”据传是古罗马恺撒大帝用来保护重要军情的加密系统。它是一种替换加密的技术，明文中的所有字母都在字母表上向后（或向前）按照一个固定数目进行偏移后被替换成密文。例，当偏移量是3的时候，所有的字母A将被替换成D，B变成E，以此类推，小写字母也一样处理，其他字符忽略，不作任何改变。
输入格式 
一个代表星期几的单词，'Monday', 'Tuesday', 'Wednesday', 'Thursday', 'Friday', 'Saturday', 'Sunday'中的一个
输出格式
依序输出:
1.文件中大写字母、小写字母、数字、空白字符和其他字符的数量
2.文件中单词的数量
3.偏移量
4.用恺撒加密方法对上述文件内容进行加密的结果
'''
def encrypating(character,n):
    if character.islower():temp = ord('a');character = chr(temp+(ord(character)-temp+n)%26)
    else:temp = ord('A');character = chr(temp+(ord(character)-temp+n)%26)
    return character
l = list(str(input()));secret = 0
for i in l:
    secret = (secret + ord(i))%26
f = open("mayun.txt","r")
content = f.readlines()
upperchr = lowerchr = num = space = others = words = 0

for line in content:
    for i in line:
        if i.isupper():upperchr+=1
        elif i.islower():lowerchr+=1
        elif i.isspace():space+=1
        elif i.isdigit():num+=1
        else:others+=1
    str = line.replace('.', '')
    str = str.replace(',', '')
    str = str.replace("'", '')
    l = list(str.split(' '))
    words+=len(l)
print("%d %d %d %d %d"%(upperchr,lowerchr,num,space,others))
print("共有%d单词"% (words+1))
print("%d"% secret)

for line in content:
    ret = ""
    for char in line:
        if char.isalpha():ret += encrypating(char,secret)
        elif char != '\n':ret += char
    print(ret)

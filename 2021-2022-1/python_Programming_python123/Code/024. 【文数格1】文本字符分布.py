'''
分析附件 data.txt 文件的字符分布，即每个字符对应的数量。
按照 字符:数量 显示，每行一个结果，如果没有出现该字节则不显示输出，字符采用 Unicode 编码升序排列。
示例1：
输入：无
输出："
a:1
b:2
c:3
"
'''
f = open("data.txt")
txt = f.read()
d = {}
for w in txt:
    d[w] = d.get(w,0) + 1
ls = list(d.items())
ls.sort()
for k, c in ls:
    print("{}:{}".format(k, c))
f.close()

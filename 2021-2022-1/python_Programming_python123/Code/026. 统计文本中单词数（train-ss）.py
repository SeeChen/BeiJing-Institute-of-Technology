'''
描述
编程统计文本中的单词数量，不包括空格和标点符号（!"#$%&()*+,./:;<=>?@[\\]^_‘{|}~\n），这些符号和空白符一样都是单词的分隔符。
输入格式
文本文件名
输出格式
单词数量
'''
path = input()
f = open(path, 'r').read()
punc = '!"#$%&()*+,./:;<=>?@[\\]^_‘{|}~\n'
replace = ' '*len(punc)
tran_tab = str.maketrans(punc, replace)
content = f.translate(tran_tab)
ls = content.split()
print(len(ls))

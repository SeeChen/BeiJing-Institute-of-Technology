# -*- coding: utf-8 -*-
"""
@author: SeeChen
"""
import sys
import os
import jieba

main_path = "C:/Users/USER/OneDrive/Desktop/PythonTextAnalysis"
Role = main_path + '/Role.txt'
Novel = main_path + '/三体.txt'
role = open(Role, 'r', encoding = 'UTF-8').readlines()
for i in range(1,213):
    globals()['content%s' % i] = ''
with open(Novel, 'r', encoding = 'UTF-8') as novel:
    i = 1
    for nv in novel:
        if nv[:3] == '第' + str(i+1) +'章' or nv[:4] == '第' + str(i+1) +'章' or nv[:5] == '第' + str(i+1) +'章':
            write = globals()['content%s' % i]
            open(main_path + '/Chapter/第' + str("%03d" % i) +'章.txt', 'w', encoding = 'UTF-8').write(write)
            i += 1
            globals()['content%s' % i] += nv
            continue
        globals()['content%s' % i] += nv
    open(main_path + '/Chapter/第' + str(i) +'章.txt', 'w', encoding = 'UTF-8').write(content212)
for i in range(1,213):
    jieba.add_word('第' + str(i) + '章')
jieba.load_userdict(os.path.join(Role))
jieba.load_userdict(os.path.join(main_path + '/词典.txt'))
counts = {}
for i in range(1, 213):
    content = jieba.lcut(globals()['content%s' % i])
    for word in content:
        if len(word) == 1 or word == '\n':
            continue
        else:
            counts[word] = counts.get(word, 0) + 1
items = list(counts.items())
items.sort(key = lambda x:x[1], reverse = True)
print("词频最高的词语是 ： “ {} ” , 出现的次数为 {} 次".format(items[0][0], items[0][1]))
role = list(map(str.strip, role))
ci = open(main_path + '/词典.txt', 'r', encoding  = 'UTF-8').readlines()
ci = list(map(str.strip, ci))
i = 0
while i < 10:
    if items[i][0] not in role and items[i][0] not in ci:
        del items[i]
    else:
        i = i + 1
print("词频最高的词语是 ： “ {} ” , 出现的次数为 {} 次".format(items[0][0], items[0][1]))

# -*- coding: utf-8 -*-
"""
@author: SeeChen
"""
import jieba
import os
import sys
import random

main_path = "C:/Users/USER/OneDrive/Desktop/PythonTextAnalysis"
Role = open(main_path + '/Role.txt', 'r', encoding = 'UTF-8')
role = list(map(str.strip, Role.readlines()))
role.sort()
chapter_path = main_path + '/Chapter'
jieba.load_userdict(os.path.join(main_path + '/Role.txt'))
content = open(main_path + '/三体.txt', 'r', encoding = 'UTF-8').read()
contentWord = jieba.lcut(content)
contentWord = [word for word in contentWord if len(word) > 1]
contentWord_ = jieba.tokenize(content)
roleLoc_Word    = [[] for i in range(20)]
roleLoc_Content = [[] for i in range(20)]
loc = list(enumerate(contentWord))
for i, x in loc:
    if x in role:
        roleLoc_Word[role.index(x)].append(i)
for x in contentWord_:
    if x[0] in role:
        roleLoc_Content[role.index(x[0])].append(x[1])
Location = [[[] for i in range(20)] for i in range(20)]
for x in range(0, 20):
    for i in range(0, 20):
        if x == i:
            continue
        for j in roleLoc_Word[i]:
            for k in roleLoc_Word[x]:
                away = j - k
                if away < -50:
                    break
                elif away > 50:
                    continue
                else:
                    Location[x][i].append(roleLoc_Word[x].index(k))
def find_co_occurrence(p1, p2, k):
    p1_  = roleLoc_Content[role.index(p1)][Location[role.index(p1)][role.index(p2)][k]]
    start = p1_ - 500
    end = p1_ + 500
    startTxt = content[start:start + 1]
    endTxt = content[end:end+ 1]
    punc = ['。', '！', '”']
    while startTxt not in punc:
        start = start - 1
        startTxt = content[start]
    while endTxt not in punc:
        end = end + 1
        endTxt = content[end]
    text = content[(start + 1):(end + 1)]
    text = text.replace(p1, ' { ' + p1 + ' } ')
    text = text.replace(p2, ' 【 ' + p2 + ' 】 ')
    return text
open(main_path + '/out/文本.txt', 'w', encoding = 'UTF-8-sig').write('')
while True:
    center, co = random.sample(range(0, 19), 2)
    if len(Location[center][co]) < 3:
        continue
    else:
        break
k = list(random.sample(range(0, len(Location[center][co])), 3))
k.sort()
for i in range(3):
    text = find_co_occurrence(role[center], role[co], k[i])
    open(main_path + '/out/文本.txt', 'a+', encoding = 'UTF-8-sig').write('第 ' + str(i + 1) + ' 个,' + '第 ' + str(k[i] + 1) + ' 次共同出现片段:\n' + text + '\n')

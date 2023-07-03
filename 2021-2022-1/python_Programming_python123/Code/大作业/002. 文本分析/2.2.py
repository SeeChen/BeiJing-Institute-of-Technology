# -*- coding: utf-8 -*-
"""
@author: SeeChen
"""
import sys
import os
import jieba

main_path = "C:/Users/USER/OneDrive/Desktop/PythonTextAnalysis"
Role = open(main_path + '/Role.txt', 'r', encoding = 'UTF-8')
role = list(map(str.strip, Role.readlines()))
role.sort()
chapter_path = main_path + '/Chapter'
jieba.load_userdict(os.path.join(main_path + '/Role.txt'))
content = open(main_path + '/三体.txt', 'r', encoding = 'UTF-8').read()
content = jieba.lcut(content)
content = [word for word in content if len(word) > 1]
roleLoc = [[] for i in range(20)]
loc = list(enumerate(content))
for i, x in loc:
    if x in role:
        roleLoc[role.index(x)].append(i)
counts = dict(map(reversed, enumerate(role)))
counts = counts.fromkeys(counts, 0)
open(main_path + '/out/共同出场.txt', 'w', encoding = 'UTF-8-sig').write('共同出场\n')
for x in range(0, 20):
    for i in range(0, 20):
        if x == i:
            continue
        for j in roleLoc[i]:
            for k in roleLoc[x]:
                away = j - k
                if away < -50:
                    break
                elif away > 50:
                    continue
                else:
                    counts[role[i]] = counts.get(role[i], 0) + 1
    output = sorted(counts.items(), key = lambda item:item[1], reverse = True)
    with open(main_path + '/out/共同出场.txt', 'a+', encoding = 'UTF-8-sig') as f:
        centerRole = role[x] + ' : ' + '共出场 ' + str(len(roleLoc[role.index(role[x])])) + ' 次\n'
        f.write(centerRole)
        y, outCounts = -1, 0
        while outCounts < 10:
            y = y + 1
            if output[y][0] == role[x]:
                continue
            topTen = '\t' + "{0:{1}<5}".format(output[y][0], chr(12288)) + '\t:' + "{:>5}".format(str(output[y][1])) + '  次\n'
            f.write(topTen)
            outCounts = outCounts + 1
    counts = counts.fromkeys(counts, 0)

# -*- coding: utf-8 -*-
"""
@author: SeeChen
"""
import sys
import os
import jieba
import pandas as pd

main_path = "C:/Users/USER/OneDrive/Desktop/PythonTextAnalysis"
Role = open(main_path + '/Role.txt', 'r', encoding = 'UTF-8').readlines()
role = list(map(str.strip, Role))
role.sort()
chapter_path = main_path + '/Chapter'
jieba.load_userdict(os.path.join(main_path + '/Role.txt'))
counts = dict(map(reversed, enumerate(role)))
counts = counts.fromkeys(counts, 0)
title = ['人物']
firstData = pd.DataFrame(columns = title, data = role)
firstData.to_csv(main_path + '/out/showRoleByTimes.csv', encoding = 'UTF-8-sig', index = 0)
output = pd.read_csv(main_path + '/out/showRoleByTimes.csv')
for i in range(1, 213):
    counts = counts.fromkeys(counts, 0)
    content = open(chapter_path + '/第' + str("%03d" % i) + '章.txt', 'r', encoding = 'UTF-8').read()
    content = jieba.lcut(content)
    for word in content:
        if word in role:
            counts[word] = counts.get(word, 0) + 1
    chapterCurrent = str('第' + str(i) + '章')
    output[chapterCurrent] = counts.values()
output.to_csv(main_path + '/out/showRoleByTimes.csv', encoding = 'UTF-8-sig', index = False)

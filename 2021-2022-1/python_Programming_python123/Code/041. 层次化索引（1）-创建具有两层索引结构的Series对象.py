'''
描述
 请参考编程模板完善代码，使用嵌套列表的方式创建具有两层索引结构的Series对象mulitindex_series。通过外层索引访问内层内容。
mulitindex_series如下：
运动  户外服装      1584
    运动卫衣      1342
    休闲鞋       1207
    跑步鞋       7818
    篮球鞋       7446
食品  名优白酒      6444
    零食大礼包    15230
    健康新零食     8269
dtype: int64
'''
import pandas as pd
mulitindex_series = pd.Series([1584, 1342, 1207, 7818, 7446, 6444, 15230, 8269],
                              index = [['运动', '运动', '运动', '运动', '运动',
                                        '食品', '食品', '食品'],
                                       ['户外服装', '运动卫衣', '休闲鞋', '跑步鞋', '篮球鞋',
                                        '名优白酒', '零食大礼包', '健康新零食']])
x = input("")
print(mulitindex_series[x]) 
print(type(mulitindex_series[x]))

'''
描述
从字典dict构建Series参考输出示例输出。本题目支持在线评阅。
import pandas as pd
d = {"a":9,"b":8,"c":7,"d":6}
a_Series = ______________________
print(a_Series)
print(type(a_Series))
'''
import pandas as pd
d = {"a":9,"b":8,"c":7,"d":6}
a_Series = pd.Series(d)
print(a_Series)
print(type(a_Series))

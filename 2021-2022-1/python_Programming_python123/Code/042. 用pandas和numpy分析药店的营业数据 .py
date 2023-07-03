'''
1.读取附件中excel文件drug_order_detail_1.xlsx中的数据。（提示：本平台读取excel文件时，函数的工作表参数为：sheet_name。）
2.计算所有分店的总销售额并打印输出。
3.增加“销售额”列，其中，销售额=价格*销量
4.按分店统计不同分店销售额的最小值，最大值，平均值。并打印输出。
5.输出效果如下所示，其中，*号代表具体统计的数据
'''
import numpy as np
import pandas as pd
df = pd.read_excel('./drug_order_detai_1.xlsx', sheet_name='drug_order_detail2')
print('所有分店总销售额是：', df['销量'].sum(), sep='')
df['销售额'] = df['价格'] * df['销量']
print(pd.DataFrame(df.groupby('分店')['销售额'].agg([np.min,np.max,np.mean])))

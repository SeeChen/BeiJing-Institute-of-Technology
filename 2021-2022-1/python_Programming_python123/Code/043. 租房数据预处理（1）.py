'''
描述
 1.请读取租房数据原始文件zfsj.csv，前五行数据如下图所示。
 https://python123.io/images/d9/31/afd720fd43e51c7a52502be89d7d.png
 2.请对面积(㎡)列数据进行预处理，去掉“平米”单位，并设置该列数据为np.float64数据类型。
 3.输出处理后的数据为zfsj2_after.csv文件，文件内前五行数据如下所示。请参考编程模板完善代码。本题目支持文件在线评阅。
   区域        小区名称    户型  面积(㎡)  价格(元/月)
0  西城     万国城MOMA  1室0厅  49.11    10000
1  西城    北官厅大同2号院  3室0厅  45.92     5000
2  西城       和平里三苑  1室1厅  40.47     5900
3  西城        菊儿大同  2室1厅  47.09     8000
4  西城  交道口北二条34号院  1室1厅  42.57     4400
'''
import numpy as np
import pandas as pd
file_path = open("zfsj.csv", encoding="utf-8")
file_data = pd.read_csv(file_path)
file_data['面积(㎡)'] = file_data['面积(㎡)'].str.replace('平米','').astype(np.float64)
file_data.to_csv("zfsj2_after.csv",encoding="utf-8",header=True)

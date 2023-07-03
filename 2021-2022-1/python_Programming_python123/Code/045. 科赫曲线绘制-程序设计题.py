'''
自然界有很多图形很规则，符合一定的数学规律。科赫(Koch)曲线在众多经典数学曲线中非常著名，由瑞典数学家冯•科赫(H•V•Koch)于1904年提出，由于其形状类似雪花，也称为雪花曲线。本题已给出绘制科赫曲线的函数koch_snowflake(order, scale=10)。请调用koch_snowflake函数绘制图形。
要求：
设置画布尺寸为9*3英寸；
添加子图1，使用默认格式；
添加子图2，设置#填充颜色为灰色#eeeeee，边缘颜色为天空蓝xkcd:sky blue，线宽为3；
添加子图3，设置#无填充色，边缘颜色为紫色，线宽为1;
保存文件名为koch.png ;
本题目支持在线测试。
'''
import matplotlib.pyplot as plt
import numpy as np
plt.rcParams["font.sans-serif"] = "SimHei"
plt.rcParams["axes.unicode_minus"] = False
def koch_snowflake(order, scale=10):
    def _koch_snowflake_complex(order):
        if order == 0:
            angles = np.array([0, 120, 240]) + 90
            return scale / np.sqrt(3) * np.exp(np.deg2rad(angles) * 1j)
        else:
            ZR = 0.5 - 0.5j * np.sqrt(3) / 3
            p1 = _koch_snowflake_complex(order - 1)
            p2 = np.roll(p1, shift=-1)
            dp = p2 - p1
            new_points = np.empty(len(p1) * 4, dtype=np.complex128)
            new_points[::4] = p1
            new_points[1::4] = p1 + dp / 3
            new_points[2::4] = p1 + dp * ZR
            new_points[3::4] = p1 + dp / 3 * 2
            return new_points
    points = _koch_snowflake_complex(order)
    x, y = points.real, points.imag
    return x, y
plt.figure(figsize = (9, 3))
#子图1：2阶科赫曲线
x, y = koch_snowflake(order = 2)
plt.subplot(1, 3, 1)
plt.fill(x, y)
plt.title("order=2 科赫曲线")
#子图2：3阶科赫曲线
x, y = koch_snowflake(order = 3)
plt.subplot(1, 3, 2)
plt.fill(x, y, color = '#eeeeee', edgecolor = 'xkcd:sky blue', linewidth = 3)
plt.title("order=3 科赫曲线")
#子图3：4阶科赫曲线
x, y = koch_snowflake(order = 4)
plt.subplot(1, 3, 3)
plt.fill(x, y, color = 'none', edgecolor = 'purple', linewidth = 1)
plt.title("order=4 科赫曲线")
plt.savefig("koch.png")

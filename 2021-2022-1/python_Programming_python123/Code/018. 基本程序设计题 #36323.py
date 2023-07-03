'''
描述
请补充横线处的代码。dictMenu中存放了你的双人下午套餐（包括咖啡2份和点心2份）的价格，让Python帮忙计算并输出消费总额。
dictMenu = {'卡布奇洛':32,'摩卡':30,'抹茶蛋糕':28,'布朗尼':26}
___①_  _ 
for i in ____②____:
    sum +=  i
print(sum)
'''
dictMenu = {'卡布奇洛':32,'摩卡':30,'抹茶蛋糕':28,'布朗尼':26}
sum = 0
for i in dictMenu.values():
    sum +=  i
print(sum)

a=int(input("enetr the number"))
sum_of_divisions=0
for i in range(1,a):
	if a%i==0:
		sum_of_divisions+=i
if sum_of_divisions==a:
	print("the number is perfect")
else:
	print("the number is not perfect")

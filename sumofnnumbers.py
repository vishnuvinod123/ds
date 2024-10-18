def sum_of_n_number(n):
	sum=0
	for i in range(1,n+1):
		sum+=i
	return sum
n=int(input("enter any positive integer:"))
result=sum_of_n_number(n)
print("the sum of the first n numbers is:",result)

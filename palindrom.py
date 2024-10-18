def is_palindrom(n):
	n_str=str(n)
	n_rev=n_str[n-1]
if n_str==n_rev:
		return true
else:	
		return false
		n=input("enter a value\n")
		result=is_palindrom(n)
if result==true:
	print("the value is palindrom")
else:
	print("the value is not palindrom")

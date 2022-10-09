# Python Program to Display Fibonacci Sequence Using Recursion

def fibonacci(num):
	if(num == 0 or num == 1):
		return num;
	return (fibonacci(num-1) + fibonacci(num-2))

num = int(input("How many numbers in series: "))

if(num <= 0):
	print("\nEnter a number greater or equal to 1")

print("\nFibonacci Series:\n")
for x in range(num):
	print(fibonacci(x), end=" ")
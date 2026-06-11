# Write a python script to create a list of first N even natural numbers
n=int(input("How many numbers you want in your list :"))
l1=[x*2 for x in range(0,n+1)]
print(l1)

# Write a Python script to create a list of first N terms of a Fibonacci series
l2=[]
r=int(input("How many numbers you want in your list :"))
i=0
a=0
b=1
for i in range(r):
    c=a+b
    l2.append(a)
    a=b
    b=c
print(l2)





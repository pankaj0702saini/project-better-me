l1=[10,20,30,40,50,60,70,80,90,100]

print(f"Sum of elements of list is {sum(l1)}")
avg=sum(l1)/10
print(f"Avg of given list is {avg}")
l2=[]
for e in l1:
    l2.append(e**2)
print("Square matrix of given matrix l1 is :")
print(l2)
l3=[23,11,45,32,87,44]
l3.sort()
print("Sorted form of given list is :")
print(l3)
l4=[]
i=0
while i<10:
    l4.append(l1[i])
    i=i+2
print("Element at even position of the list :")
print(l4)
     
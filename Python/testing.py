import math

n=12345
print(n)
digits=int(math.log(n,10))+1
print(digits)

a="abcde"
print(a.startswith("ab"))
print(a)
print(a[2])
print(type(a))
print(type(a[2]))

list=[]
list.append(1)
list.append(2)
list.append(3)
print(list)
list2=[]
list2.extend(list[:1])
print(list2)

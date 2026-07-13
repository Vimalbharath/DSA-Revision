n=12345
console.log(n)

digits=Math.log10(n)+1
console.log(Math.floor(digits))

a="abcde"
console.log(a)
console.log(a[2])
console.log(a.startsWith('ab'))

list=[]
list[0]=1
list[1]=2
list2={}
list2=[...list,21]//slice list??
console.log(list)
console.log(list2)
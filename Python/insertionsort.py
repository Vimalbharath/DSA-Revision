def main():
    arr=[4,5,6,21,1,2,0]
    insertionsort(arr)
    print(arr)

def insertionsort(arr):
    n=len(arr)
    for i in range(n):
        while(i>0):
            if arr[i-1]>arr[i]:
                swap(arr,i,i-1)
            i=i-1

def swap(arr,a,b):
    arr[a],arr[b]=arr[b],arr[a]

if __name__=="__main__":
    main()
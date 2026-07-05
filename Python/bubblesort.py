def bubblesort(arr):
    n=len(arr)
    #print(n)
    for i in range (n):
        swapped=False
        for j in range(1,n-i):
            #print(j)
            if (arr[j-1]>arr[j]):
                swapped=True
                swap(arr,j,j-1)
        #print()
        if (not swapped):
            break

def swap(arr,a,b):
    arr[a],arr[b]=arr[b],arr[a]

def main():
    arr=[5,1,2,3,4,0]
    bubblesort(arr)
    print(arr)

if __name__=="__main__":
    main()
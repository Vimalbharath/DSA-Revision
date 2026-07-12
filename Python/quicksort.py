def main():
    arr=[5,4,3,2,1]
    quicksort(arr,0,len(arr)-1)
    print(arr)

def quicksort(arr,s,e):
    pivot=s+(e-s)//2
    low,high=s,e
    while low<high and low<=pivot:
        if arr[low]<=arr[pivot]:
            low=low+1
        else:
            swap(arr,low,high)

def swap(arr,a,b):
    arr[a],arr[b]=arr[b],arr[a]



if __name__=="__main__":
    main()
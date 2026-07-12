def main():
    arr=[5,4,3,2,1,0,7,8]
    quicksort(arr,0,len(arr)-1)
    print(arr)

def quicksort(arr,s,e):
    if (s>=e):
        return
    m=s+(e-s)//2
    pivot=arr[m]
    low,high=s,e
    while low<=high:
        while arr[low]<pivot:
            low=low+1
        while arr[high]>pivot:
            high=high-1
        if low<=high:
            swap(arr,low,high)
            low=low+1
            high=high-1
    quicksort(arr,low,e)
    quicksort(arr,s,high)

def swap(arr,a,b):
    arr[a],arr[b]=arr[b],arr[a]



if __name__=="__main__":
    main()
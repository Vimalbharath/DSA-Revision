def main():
    arr=[5,1,2,3,4,0]
    selectionsort(arr)
    print(arr)

def selectionsort(arr):
    n=len(arr)
    for i in range(n):
        lastindex=n-1-i
        maxindex=max(arr,0,lastindex+1)
        swap(arr,maxindex,lastindex)

def max(arr,start,end):
    max=start
    for i in range(start,end):
        if arr[i]>arr[max]:
            max=i
    return max

    
def swap(arr,a,b):
    arr[a],arr[b]=arr[b],arr[a]

if __name__=="__main__":
    main()
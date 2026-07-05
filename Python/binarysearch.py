def main():
    arr=[1,2,4,5,6,7,9,10]
    res=binarysearch(arr,9)
    print(res)

def binarysearch(arr,target):
    s,e=0,len(arr)-1
    while(s<=e):
        m=s+(e-s//2)
        if (arr[m]>target):
            e=m-1
        if (arr[m]<target):
            s=m+1
        if (arr[m]==target):
            return m
    return -1


if __name__=="__main__":
    main()
    
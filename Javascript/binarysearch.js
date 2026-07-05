function binarysearch(nums,target){
    s=0
    e=nums.length-1
    while(s<=e){
        m=s+(e-s/2)
        console.log(m)
        if (nums[m]>target){
            e=m-1
        }
        if (nums[m]<target){
            s=m+1
        }
        if(nums[m]==target){
            return true
        }
    }
    return false
}

function main(){
    nums=[1,2,4,5,6,7,8]
    target=5
    console.log(binarysearch(nums,target))
}

main()

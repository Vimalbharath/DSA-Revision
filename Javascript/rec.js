function printnum(n){
    if(n==0){
        return
    }
    console.log(n)
    printnum(n-1)
}

printnum(5)

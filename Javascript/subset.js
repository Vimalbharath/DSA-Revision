function skip(p,up){
    if (up.length==0){
        console.log(p)
        return 
    }
    if (up[0]=='a'){
        skip(p,up.slice(1))
    }else{
        skip(p+up[0],up.slice(1))
    }

}

function main(){
    a="abacgaax"
    skip("",a)
}

main()
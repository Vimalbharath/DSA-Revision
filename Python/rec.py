def recprod(n):
    if n==1:
        return 1
    return n*recprod(n-1)

def main():
    print(recprod(5))

if __name__=="__main__":
    main()

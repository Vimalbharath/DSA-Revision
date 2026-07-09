package main

func main() {
	println(addrec(5))
}

func addrec(n int) int {
	if n == 0 {
		return n
	}
	return n + addrec(n-1)
}

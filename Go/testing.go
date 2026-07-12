package main

import (
	"fmt"
	"math"
)

func main() {
	n := 12345
	fmt.Print(n)
	digit := int(math.Log10(float64(n))) + 1
	fmt.Print(digit)
	a := "abcde"
	fmt.Print(a)

}

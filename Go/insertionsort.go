package main

import "fmt"

func main() {
	fmt.Println("Hello")
	//var arr=[4] int{2,3,4,5};
	arr := []int{2, 3, 4, 5}
	for i := 0; i < len(arr); i++ {
		fmt.Println(arr[i])
	}
}

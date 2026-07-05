package main

import "fmt"

func main() {
	fmt.Println("Hello")
	//var arr=[4] int{2,3,4,5};
	arr := []int{2, 3, 4, 5, 0, 9, 8}
	insertionsort(arr)
	for i := 0; i < len(arr); i++ {
		fmt.Println(arr[i])
	}
}

func insertionsort(arr []int) {
	var n int = len(arr)
	//fmt.Println(n)
	for i := 0; i < n; i++ {
		j := i
		for j > 0 {
			if arr[j-1] > arr[j] {
				swap(arr, j, j-1)
			}
			//fmt.Println(i)
			j = j - 1
		}
	}
}

func swap(arr []int, a int, b int) {
	arr[a], arr[b] = arr[b], arr[a]
}

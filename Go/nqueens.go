package main

import (
	"fmt"
)

func isSafe(board [4][4]bool, r int, c int) bool {
	for i := 0; i < r; i++ {
		if board[i][c] {
			return false
		}
	}
	for i, j := r-1, c-1; i >= 0 && j >= 0; i, j = i-1, j-1 {
		if board[i][j] {
			return false
		}
	}
	for i, j := r-1, c+1; i >= 0 && j < len(board); i, j = i-1, j+1 {
		if board[i][j] {
			return false
		}
	}
	return true
}
func nqueens(board [4][4]bool, row int) int {
	if row == len(board) {
		fmt.Println(board)
		return 1
	}
	count := 0
	for col := 0; col < len(board); col++ {
		if isSafe(board, row, col) {
			board[row][col] = true
			count += nqueens(board, row+1)
			board[row][col] = false
		}

	}
	return count
}

func main() {
	fmt.Println("Hi Vimal")
	var board [4][4]bool
	fmt.Print(len(board))
	ans := nqueens(board, 0)
	fmt.Println(ans)

}

// Pass.

package main

import (
	"fmt"
	"io"
)

func main() {
	for {
		var a, b int
		if _, err := fmt.Scanf("%d %d", &a, &b); err == io.EOF {
			break
		}

		fmt.Println(Abs(a - b))
	}
}

func Abs(n int) int {
	if n < 0 {
		return n * -1
	}

	return n
}

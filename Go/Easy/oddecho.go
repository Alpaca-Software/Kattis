// Pass.

package main

import (
	"fmt"
	"os"
)

func main() {
	var n int

	fmt.Scanf("%d\n", &n)

	if n < 1 || n > 10 {
		os.Exit(1)
	}

	for i := 1; i <= n; i++ {
		var word string
		fmt.Scanln(&word)

		if i%2 != 0 {
			fmt.Println(word)
		}
	}
}

// Result: 
//		Test: 25/27.
//		Failed: 10 - 12.
package main

import "fmt"

func main() {
	var total int
	fmt.Scanf("%d", &total)

	// Get numbers.
	numbers := make([]int, total)
	for i := range numbers {
		fmt.Scanf("%d", &numbers[i])
	}

	Reverse(numbers)

	// Print numbers.
	for _, number := range numbers {
		fmt.Println(number)
	}
}

func Reverse(numbers []int) {
	for i := 0; i < len(numbers)/2; i++ {
		mirror := len(numbers) - i - 1
		numbers[i], numbers[mirror] = numbers[mirror], numbers[i]
	}
}

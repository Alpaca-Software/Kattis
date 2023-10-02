// Pass.

package main

import "fmt"

func main() {
	var uncertainty string
	fmt.Scanln(&uncertainty)

	var total int
	for _, r := range uncertainty {
		if r != 'u' {
			continue
		}

		total++
	}

	fmt.Println(total)
}

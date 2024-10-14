package main

import "fmt"

type numbers interface {
    uint | float32 | float64 | int8 | int16 | int32
}

func sort[T numbers](list []T){
    swapped := true
    counter := len(list)
    for swapped {
        swapped = false
        for i := 0; i < len(list)-1; i++ {
            if list[i] > list[i+1] {
                tmp := list[i]
                list[i] = list[i+1]
                list[i+1] = tmp
                swapped = true
            }
        }
        counter--
    }
}

func main(){
    list := []int16{3, 18, 30, 11, 25, 60, 95, 1, 41, 56}
    fmt.Printf("Unsorted: %v\n", list)
    sort(list)
    fmt.Printf("Sorted: %v", list)

}

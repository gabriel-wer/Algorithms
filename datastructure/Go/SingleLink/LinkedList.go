package main

import (
    "fmt"
)

type Node struct {
    value int
    next  *Node
}

type LinkedList struct { 
    size int
    head *Node
    tail *Node
    node Node
}

func (list *LinkedList) enqueue(value int) {
    var node Node
    node.value = value
    node.next = nil

    if list.head == nil {
        list.head = &node
        list.tail = &node
    }else {
        list.tail.next = &node
        list.tail = &node
    }

    list.size++
}

func (list *LinkedList) peek() (int){
    return list.head.value
}

func (list *LinkedList) pop() (int){
    value := list.head.value    
    
    list.head = list.head.next
    list.size--
    return value
}

func main() {
    var list LinkedList

    list.enqueue(10)
    list.enqueue(15)
    list.enqueue(20)
    list.enqueue(23)
    fmt.Printf("Peek: %d\n", list.peek())
    v := list.pop()
    fmt.Printf("Pop: %d\n", v)
    v = list.pop()
    fmt.Printf("Pop: %d\n", v)

    //pop & print remaining values
    for list.head != nil {
        fmt.Printf("Pop: %d\n", list.pop())
    }
}

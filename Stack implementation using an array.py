maximum=10
arr=[None]*maximum
top=-1
def push(m):
        global maximum,top,arr
        if(top >= maximum-1):
                print("Overflow(insertion not possible): ",m)
        else:
                top+=1
                arr[top]=m
                print("Inserted element in stack:: ",m)
                
def pop():
        global top,arr
        if(top < 0):
                print("Underflow(deletion not possible)")
        else:
                m = arr[top];
                top-=1
                print("Popped element from stack: ",m)
                
def peek():
        if (top < 0):
                print("Stack is Empty")
        else:
                m = arr[top]
                print("Top Element in the stack : ",m)
def display():
        global arr,top
        if(top < 0):
                print("Stack is Empty")
        else:
                print("Elements in the stack : ")
                while(top>=0):
                        m = arr[top]
                        top-=1
                        print(m)

push(10)
push(11)
push(12)
push(13)
push(14)
push(15)
push(16)
push(17)
push(18)
push(19)
push(20)
push(21)
print(" ")
pop()
pop()
pop()
print(" ")
peek() 
print(" ")
display()

import turtle
import random

t = turtle.Turtle()
t.speed(0)

for i in range(50):
    t.color(random.random(), random.random(), random.random())
    
    t.begin_fill()
    t.circle(i)
    t.end_fill()
    
    t.right(10)

turtle.done()
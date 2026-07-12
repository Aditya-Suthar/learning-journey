from manim import *

class A(Scene):
    def construct(self):
        sq = Square(side_length=4,stroke_color = RED, fill_color = RED, fill_opacity = 1)


        self.play(Create(sq) , run_time = 10)
        self.wait()

class B(Scene):
    def construct(self):
from manim import *

class Demo(Scene):
    def construct(self):

        text = Tex("Hello")
        eq = MathTex("x^2")

        eq.next_to(text, RIGHT , buff=2)

        self.play(Write(text))
        self.play(Write(eq))
        self.wait()
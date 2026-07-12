from manim import *

class Demo(Scene):

    def construct(self):
        
        text = Tex("Hello World")
        eq = MathTex("x^2 + y^2 = z^2")

        text.move_to(LEFT * 3)
        eq.move_to(RIGHT * 3)

        self.play(Write(text))
        self.play(Write(eq))
        self.wait()
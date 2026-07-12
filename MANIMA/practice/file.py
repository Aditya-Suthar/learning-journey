from manim import *

class Project1(Scene):
    def construct(self):

        num = MathTex("ln(2)")

        box = SurroundingRectangle(
            num,
            stroke_color=BLUE,
            fill_color=RED,
            fill_opacity=0.3,
            buff=0.4
        )

        name = Tex("A","D","I","T","Y","A").next_to(box, DOWN, buff=0.3)

        arrow = Arrow(
            start=box.get_bottom(),
            end=name.get_top()
        )

        self.play(Write(num))
        self.play(DrawBorderThenFill(box))
        self.play(
            name[0].animate.set_color(RED),
            name[1].animate.set_color(YELLOW),
            name[2].animate.set_color(BLUE),
            name[3].animate.set_color(PURE_CYAN),
            name[4].animate.set_color(GRAY_BROWN),
            name[5].animate.set_color(GREEN),
        )
        self.play(Create(arrow))

        self.wait()
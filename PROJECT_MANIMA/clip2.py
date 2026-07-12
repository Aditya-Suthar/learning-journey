from manim import *

class B(Scene):
    def construct(self):
        t = MathTex("a", "+", "b", "i")
        t.scale(1.3)

        self.play(Create(t))
        self.play(Circumscribe(t))

        self.play(t[3].animate.set_color(RED))

        self.play(
            FadeOut(VGroup(t[0], t[1], t[2])),
            t[3].animate.move_to(ORIGIN).scale(1.5)
        )

        i_def = MathTex("i = \\sqrt{-1}")
        self.play(Transform(t[3],i_def))

        self.wait()
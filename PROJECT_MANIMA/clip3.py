from manim import *

class C (Scene):
    def construct (self):
        t = Tex("Argand Plane")

        self.play(Write(t), run_time=2)
        self.play(t.animate.to_edge(UP).scale(0.8))
        self.wait()
from manim import *

class ValueTrackers(Scene):
    def construct(self):
        
        k = ValueTracker(3.5)

        num = DecimalNumber().set_value(k.get_value())

        self.play(FadeIn(num))
        self.play(k.animate.set_value())
        self.wait()
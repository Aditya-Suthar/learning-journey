from manim import *

class Library (Scene):
    def construct(self):
        
        ax = Axes()

        self.play(Create(ax),run_time = 3)
        self.wait()
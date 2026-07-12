from manim import *

class Graph(Scene):
    def construct(self):
        plane = NumberPlane(
            x_range=[-4, 4, 2],
            y_range=[0, 16, 4],
            x_length=4,
            y_length=4,
        ).to_edge(DOWN).add_coordinates()

        parab = plane.plot(lambda x: x**2, color=RED)

        self.play(Create(plane))
        self.play(Create(parab))
        self.wait()
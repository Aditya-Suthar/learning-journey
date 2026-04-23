from manim import *

class Demo(ThreeDScene):
    def construct(self):
        self.set_camera_orientation(phi=70 * DEGREES, theta=45 * DEGREES)

        axes = ThreeDAxes()
        self.play(Create(axes))

        cube = Cube().set_color(RED).set_fill(RED, opacity=0.8)
        self.play(Create(cube))

        self.play(cube.animate.rotate(PI/2))

        sphere = Sphere().set_color(BLUE).set_fill(BLUE, opacity=0.8)
        self.play(Transform(cube, sphere))
        self.play(cube.animate.shift(LEFT * 3))
        self.wait()

        cube = Cube().set_color(RED).set_fill(RED, opacity=0.8)
        self.play(Create(cube))

        self.play(cube.animate.rotate(PI/2))

        sphere = Sphere().set_color(BLUE).set_fill(BLUE, opacity=0.8)
        self.play(Transform(cube, sphere))
        self.play(cube.animate.shift(RIGHT * 3))
        self.wait()
from manim import *

class Demo(ThreeDScene):
    def construct(self):
        self.set_camera_orientation(phi = 70 * DEGREES , theta = 45 * DEGREES)

        cube = Cube().set_color(RED).set_fill(RED,opacity = 0.5)

        self.play(Create(cube),run_time = 3)
        self.play(Rotate(cube, angle=PI/2, axis=UP ,run_time = 3))     # Y-axis
        self.play(Rotate(cube, angle=PI/2, axis=RIGHT,run_time = 3))  # X-axis
        self.play(Rotate(cube, angle=PI/2, axis=OUT,run_time = 3))    # Z-axis        
        self.wait()
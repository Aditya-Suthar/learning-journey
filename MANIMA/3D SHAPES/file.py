from manim import *

class Shapes3D(ThreeDScene):
    def construct(self):
        self.set_camera_orientation(phi=70 * DEGREES, theta=45 * DEGREES)

        cube = Cube().shift(LEFT * 3)
        sphere = Sphere().shift(RIGHT * 3)
        cone = Cone().shift(UP * 2)
        cylinder = Cylinder().shift(DOWN * 2)

        self.play(Create(cube))
        self.play(Create(sphere))
        self.play(Create(cone))
        self.play(Create(cylinder))

        self.wait()
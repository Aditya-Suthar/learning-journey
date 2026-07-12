from manim import * 

class A (Scene):
    def construct(self):

        t = Tex("What is a Complex Number?")
        self.play(Create(t),run_time = 4)
        self.play(t.animate.to_edge(UP).scale(0.9),run_time = 4)

        nums = VGroup(
            MathTex("2","+","3i"),
            MathTex("3","+","4i"),
            MathTex("5","+","6i"),
        )

        nums[1].next_to(nums[0],LEFT,buff=1)
        nums[2].next_to(nums[0],RIGHT,buff=1)

        self.play(Write(nums[0]))
        self.play(Write(nums[1]))
        self.play(Write(nums[2]))

        self.play(*[num[2].animate.set_color(RED) for num in nums])

        self.play(
                FadeOut(nums[1]),
                FadeOut(nums[2]),
                FadeOut(t),
                nums[0].animate.move_to(ORIGIN).scale(1.3),
                run_time=1
                )

        self.wait(0.5)  
        self.play(Unwrite(nums[0]))
        self.wait()
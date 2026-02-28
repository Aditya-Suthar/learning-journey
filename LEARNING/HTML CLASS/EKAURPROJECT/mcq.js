function checkQuiz() {

    let answers = {
        q1: "B",
        q2: "C",
        q3: "D",
        q4: "E",
        q5: "F",
        q6: "G",
        q7: "H",
        q8: "I",
        q9: "J",
        q10: "K"
    };

    let score = 0;

    for (let key in answers) {

        let selected = document.querySelector(`input[name="${key}"]:checked`);

        if (selected && selected.value === answers[key]) {
            score++;
        }
    }

    alert("Your Final Score is: " + score + "/10");
}
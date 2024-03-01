import readline from "readline-sync";

let answer = [];

var number = readline.question("Enter number : ");

for (let i = 1; i <= number; i++) {
    if (i <= 2) {
        answer.push(1);
        continue;
    } 
    answer.push(answer[answer.length - 2] + answer[answer.length - 1]);
    
}

for (let i = 0; i < answer.length; i++) {
    console.log(`${i +1})\t${answer[i]}`);
}


import readline from "readline-sync";

console.log("1 --> SUM\n2 --> SUB\n3 --> MUL\n4 --> DIV\n5 --> REM\n6 --> END");
var option = 0;
var num1, num2;

while (option != 6) {

    option = parseInt(readline.question("Enter option : "));

    if (option == 6) {
        console.log("Bye.\n");
        break;
    }

    num1 = parseInt(readline.question("Enter num1 : "));
    num2 = parseInt(readline.question("Enter num2 : "));

    switch (option) {
        case 1:
            console.log(`${num1} + ${num2} = ${num1 + num2}\n`);
            break;

        case 2:
            console.log(`${num1} - ${num2} = ${num1 - num2}\n`);
            break;

        case 3:
            console.log(`${num1} * ${num2} = ${num1 * num2}\n`);
            break;

        case 4:
            console.log(`${num1} / ${num2} = ${num1 / num2}\n`);
            break;
        
        case 5:
            console.log(`${num1} % ${num2} = ${num1 % num2}\n`)
            break;

        default:
            console.log("Invalid operation.");

    }




}

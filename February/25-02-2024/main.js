import readline from "readline-sync";

var x = readline.question("Enter number : ");
var s = "";
for (var i = x.length - 1; i >= 0; i--) {
    s += x[i];
}

console.log(s);
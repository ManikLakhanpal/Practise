import readline from "readline-sync";

var rows = readline.questionInt("JavaScript\nEnter the number of rows: "); 

for (var i = 1; i <= rows; i++) {
    var ans = "";

    for (var j = 1; j <= i; j++) {
        ans += "*";
    }

    for(var k = 1; k <= (rows - i) * 2; k++) {
        ans += " ";
    }

    for(var l=1; l <= i; l++) {
        ans += "*";
    }

    console.log(ans);

}
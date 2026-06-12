const fs = require('fs');
let a = fs.readFileSync(0).toString().trim();
let b = Number(a);
if (b>=80) {
    console.log("pass");
}
else {
    console.log((80-b)+" more score");
}